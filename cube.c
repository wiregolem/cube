//Combile with
//gcc cube.c gfx.c -o cube -lX11 -lm


#include <stdio.h>
#include "gfx.h"



void drawSquare(int xpos,int ypos, int size)
{
	gfx_line(xpos,ypos,xpos,ypos+size);
        gfx_line(xpos,ypos,xpos+size,ypos);
        gfx_line(xpos,ypos+size,xpos+size,ypos+size);
        gfx_line(xpos+size,ypos,xpos+size,ypos+size);

}

void drawCube(int xpos, int ypos, int size)
{
	//draw front face exterior
	drawSquare(xpos,ypos,size);
	//draw rear face interior
	drawSquare(xpos-(size/2),ypos-(size/2),size);
	
	//draw connecting edges
        gfx_line(xpos-(size/2),ypos-(size/2),xpos,ypos);
	gfx_line(xpos-(size/2),ypos-(size/2)+size,xpos,ypos+size);
	gfx_line(xpos-(size/2)+size,ypos-(size/2),xpos+size,ypos);
	gfx_line(xpos-(size/2)+size,ypos-(size/2)+size,xpos+size,ypos+size);
}

void centerCube(int winSize, int cubeSize)
{
	int cubePos = ((( winSize - (cubeSize*1.5) )/2)+(cubeSize/2));
	drawCube(cubePos,cubePos,cubeSize);
}


int main()
{
	int winSize = 300;

	char c;

	// Open a new window as our drawing surface
	gfx_open(winSize,winSize,"Cube");

	// Set RGB drawing color to white
	gfx_color(255,255,255);

	// Draw a cube centered in the window
	centerCube(winSize,100);


	while(1) {
		// Wait for the user
		c = gfx_wait();

		// Quit if q is pressed
		if(c=='q') break;
	}

	return 0;
}
