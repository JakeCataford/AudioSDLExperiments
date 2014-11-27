//
//  Oscillator.cpp
//  farts
//
//  Created by Jake Cataford on 11/26/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include <stdio.h>
#include "Oscillator.h"

void Oscillator::Reset() {
	counter = 0;
}

void Oscillator::SetFrequency(double frequency) {
	this->frequency = frequency;
}

double Oscillator::GetFrequency() {
	return frequency;
}

double Oscillator::Next() {
	counter ++;
	return this->CalculateNextSample();
}


