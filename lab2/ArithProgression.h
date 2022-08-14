#include "Progression.h"

class ArithProgression : public Progression {	// arithmetic progression
public:
	ArithProgression(long i = 1);				// constructor
protected:
	virtual long nextValue();					// advance
protected:
	long inc;									// increment
};