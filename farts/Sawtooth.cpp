//
//  Sawtooth.cpp
//  farts
//
//  Created by Jake Cataford on 11/26/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "Sawtooth.h"

double Sawtooth::CalculateNextSample() {
	return 100 * ((counter % (int) frequency)/frequency) * 2 - 1;
}