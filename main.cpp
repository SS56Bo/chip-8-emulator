#include <SDL2/SDL_error.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <cstddef>
#include <cstdio>
#include <SDL2/SDL.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

    //setting up pointers for window and surface
    SDL_Surface* surface = NULL;
    SDL_Window* window=NULL;

    //Check for Initialization fail
    if (SDL_Init(SDL_INIT_EVERYTHING)<0){
        cout<<"Error initializing SDL: "<<SDL_GetError()<<endl;
        system("pause");
        return 1;
    }

    //setting up the window
    window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 200, 150, SDL_WINDOW_SHOWN);

    //Creation of Window not succedded error
    if (!window){
        cout<<"Error initializing SDL: "<<SDL_GetError()<<endl;
        system("pause");
        return 1;
    }

    //SETTING UP THE SURFACE
    surface = SDL_GetWindowSurface(window);

    //Creation of WindowSurface not succedded error
    if (!window){
        cout<<"Error initializing SDL: "<<SDL_GetError()<<endl;
        system("pause");
        return 1;
    }
}
