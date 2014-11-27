//
//  Noise.cpp
//  farts
//
//  Created by Jake Cataford on 11/27/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "Noise.h"

double Noise::CalculateNextSample() {
	return 100 * (rand() * 2 - 1);
}