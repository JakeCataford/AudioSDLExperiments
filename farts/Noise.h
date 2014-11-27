//
//  Noise.h
//  farts
//
//  Created by Jake Cataford on 11/27/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__Noise__
#define __farts__Noise__

#include <stdio.h>
#include <stdlib.h>
#include "Oscillator.h"

class Noise : public Oscillator {
protected:
	double CalculateNextSample();
};

#endif /* defined(__farts__Noise__) */
