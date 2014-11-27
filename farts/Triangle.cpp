//
//  Triangle.cpp
//  farts
//
//  Created by Jake Cataford on 11/27/14.
//  Copyright (c) 2014 svblm. All rights reserved.
//

#include "Triangle.h"

double Triangle::CalculateNextSample() {
	return 100 * ((fabs((counter % (int) frequency) - (frequency * 0.5))/frequency)) * 2 - 1;
}