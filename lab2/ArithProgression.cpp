#include "ArithProgression.h"

ArithProgression::ArithProgression(long i)	// constructor
	: Progression(), inc(i) { }

long ArithProgression::nextValue() {		// advance by adding
	cur += inc;
	return cur;
}