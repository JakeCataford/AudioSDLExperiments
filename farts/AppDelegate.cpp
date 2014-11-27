//
//  AppDelegate.cpp
//  farts
//
//  Created by Jake Cataford on 11/22/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "AppDelegate.h"


AppDelegate::AppDelegate() {
	Start();
}

void AppDelegate::Start() {
	currentOsc = new Noise();
	
	sound_buffer = new Uint8[512];
	sound_len= 512;
	spec.freq = 44100;
	spec.format = AUDIO_S32SYS;
	spec.channels = 1;
	spec.silence = 0;
	spec.samples = 512;
	spec.padding = 0;
	spec.size = 0;
	spec.userdata = this;
	
	spec.callback = AudioCallback;
	if (SDL_OpenAudio (&spec, NULL) < 0)
	{
		printf ("fuck you: %s\n", SDL_GetError ());
		exit (-1);
	}
	SDL_PauseAudio (0);
	
}

void AppDelegate::Update() {
	time ++;
	
}

void AppDelegate::OnMousedown() {
	
}

void AppDelegate::OnMouseMove() {
	
}

void AppDelegate::FillBufferWithOscSamples(Uint8 *buffer, int length) {
	for(int i = 0; i < length; i++) {
		buffer[i] = currentOsc->Next();
	}
	

}

void AppDelegate::AudioCallback(void *userdata, Uint8 *stream, int len) {
	SDL_memset(stream, 0, len);
	AppDelegate *instance = (AppDelegate*) userdata;
	instance->FillBufferWithOscSamples(stream, len);
}