//
//  App.cpp
//  farts
//
//  Created by Jake Cataford on 11/22/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "App.h"

const int RUN_GAME_LOOP = 1;

void App::eventLoop() {
	SDL_Event event;
	
	while((!done) && (SDL_WaitEvent(&event))) {
		switch(event.type) {
			case SDL_USEREVENT:
				handleUserEvents(&event);
				break;
				
			case SDL_KEYDOWN:
				// Handle any key presses here.
				break;
				
			case SDL_MOUSEBUTTONDOWN:
				// Handle mouse clicks here.
				break;
				
			case SDL_QUIT:
				done = true;
				break;
				
			default:
				break;
		}   // End switch
		
	}   // End while
}

void App::handleUserEvents(SDL_Event *event) {
	switch (event->user.code) {
		case RUN_GAME_LOOP:
			delegate->Update();
			break;
			
		default:
			break;
	}
}

void App::setAppDelegate(AppDelegate *delegate) {
	this->delegate = delegate;
}