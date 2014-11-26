//
//  App.h
//  farts
//
//  Created by Jake Cataford on 11/22/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__App__
#define __farts__App__

#include <stdio.h>
#include <SDL/SDL.h>
#include "AppDelegate.h"

class App {
	bool done;
	AppDelegate *delegate;
	void handleUserEvents(SDL_Event *event);
public:
	void setAppDelegate(AppDelegate *delegate);
	void eventLoop(void);
};

#endif /* defined(__farts__App__) */
