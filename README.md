# cube
Goal: Display a rotating cube 
Current status: Displays a very stationary cube

## Setup
-Requires Linux using the X11 window system
-gcc is installed on most linux distributions by default
-simply clone and build

## Clone
- `$ git clone https://github.com/wiregolem/cube.git`
 or using GitHub's command line interface
- `$ gh repo clone wiregolem/cube`

## Build
- Navigate to the cloned directory in terminal and run
- `$ gcc cube.c gfx.c -o build/cube -lX11 -lm`
- execute with 
- `$ build/cube`


### gfx graphics library
Uses a simple graphics library `gfx.c & gfx.h` created by Professor Douglas Thain of The University of Notre Dame
The graphics library is licensed under a Creative Commons Attribution 4.0 International License.  https://creativecommons.org/licenses/by/4.0/


