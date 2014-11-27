//
//  Oscillator.h
//  farts
//
//  Created by Jake Cataford on 11/26/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__Oscillator__
#define __farts__Oscillator__

#include <stdio.h>

class Oscillator {
protected:
	int counter;
	double frequency = 440.0;
	virtual double CalculateNextSample() = 0;
	
public:
	Oscillator() {}

	virtual void Reset();
	virtual double Next();
	virtual double GetFrequency();
	virtual void SetFrequency(double);
	
};

#endif /* defined(__farts__Oscillator__) */
