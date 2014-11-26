//
//  main.cpp
//  farts
//
//  Created by Jake Cataford on 11/22/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>
#include "App.h"

int main(int argc, char *argv[])
{
	
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}
	
	SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == nullptr){
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}
	
	SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == nullptr){
		SDL_DestroyWindow(win);
		std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
		return 1;
	}
	
	atexit(SDL_Quit);
	
	
	
	App *app = new App();
	AppDelegate *appDelegate = new AppDelegate();
	
	app->setAppDelegate(appDelegate);
	app->eventLoop();
	delete appDelegate;
	delete app;
	return 0;
}

