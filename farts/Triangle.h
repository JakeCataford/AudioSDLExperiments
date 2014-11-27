//
//  Triangle.h
//  farts
//
//  Created by Jake Cataford on 11/27/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#ifndef __farts__Triangle__
#define __farts__Triangle__

#include <stdio.h>
#include <math.h>
#include "Oscillator.h"

class Triangle : public Oscillator {
protected:
	double CalculateNextSample();
};


#endif /* defined(__farts__Triangle__) */
