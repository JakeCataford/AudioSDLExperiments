//
//  Sin.h
//  farts
//
//  Created by Jake Cataford on 11/26/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__Sin__
#define __farts__Sin__

#include <stdio.h>
#include <math.h>
#include "Oscillator.h"

class Sin : public Oscillator {
protected:
	double CalculateNextSample();
};

#endif /* defined(__farts__Sin__) */
