#include <SDL2/SDL_error.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <cstddef>
#include <cstdio>
#include <SDL2/SDL.h>
#include <cstdlib>
#include <iostream>
using namespace std;

void final_clean(void *ptr) {
    // Since SDL_DestroyWindow expects a SDL_Window* , we have to
    // type-cast ptr
    SDL_DestroyWindow(static_cast<SDL_Window*>(ptr));
    SDL_Quit(); //Shut down SDL Entirely
}

bool checkInit() {
    if (SDL_Init(SDL_INIT_EVERYTHING)<0){
        cout<<"Error initializing SDL: "<<SDL_GetError()<<endl;
        system("pause");
        return false;
    }
    return true;
}

bool INITSuccess(void *ptr) {
    if (!ptr) {
        cout<<"Error initializing SDL: "<<SDL_GetError()<<endl;
        system("pause");
        return false;
    }
    return true;
}


int main(int argc, char **argv) {

    //setting up pointers for window and surface
    SDL_Surface* surface = NULL;
    SDL_Window* window=NULL;

    //Check for Initialization fail
    checkInit();

    //setting up the window
    window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    //Creation of Window not succedded error
    INITSuccess(window);

    //SETTING UP THE SURFACE
    surface = SDL_GetWindowSurface(window);

    //Creation of WindowSurface not succedded error
    INITSuccess(surface);

    final_clean(window);
    return 0;
}
