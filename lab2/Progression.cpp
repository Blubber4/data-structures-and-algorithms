#include <iostream>
#include "Progression.h"

void Progression::printProgression(int n) { // print n values
	std::cout << firstValue();					// print the first
	for (int i = 2; i <= n; i++)			// print 2 through n
		std::cout << ' ' << nextValue();
	std::cout << std::endl;
}long Progression::firstValue() {			// reset
	cur = first;
	return cur;
}

long Progression::nextValue() {				// advance
	return ++cur;
}