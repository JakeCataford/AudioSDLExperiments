//
//  Sin.cpp
//  farts
//
//  Created by Jake Cataford on 11/26/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "Sin.h"

double Sin::CalculateNextSample() {
	return 100 * sin(frequency * (M_PI * 0.5) * counter / 44100);
}