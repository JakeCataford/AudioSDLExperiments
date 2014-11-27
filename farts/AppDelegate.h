//
//  AppDelegate.h
//  farts
//
//  Created by Jake Cataford on 11/22/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__AppDelegate__
#define __farts__AppDelegate__

#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Oscillator.h"
#include "Sin.h"
#include "Sawtooth.h"
#include "Triangle.h"
#include "Noise.h"

class AppDelegate {
	SDL_AudioSpec spec; 
	Uint32 sound_len;
	Uint8 *sound_buffer;
	int sound_pos = 0;
	int counter;
	int time;
	Oscillator *currentOsc;
public:
	AppDelegate();
	void OnMousedown();
	void OnMouseMove();
	void Update();
	void Start();
	void FillBufferWithOscSamples(Uint8 *, int);
	static void AudioCallback(void*, Uint8*, int);
};

#endif /* defined(__farts__AppDelegate__) */
