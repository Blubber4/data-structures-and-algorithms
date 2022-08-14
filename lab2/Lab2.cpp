#include <iostream>
#include "Progression.h"
#include "ArithProgression.h"

using namespace std;

int main() {
	Progression* prog;
									// test ArithProgression
	cout << "Arithmetic progression with default increment:\n";
	prog = new ArithProgression();
	prog->printProgression(10);
	cout << "Arithmetic progression with increment 5:\n";
	prog = new ArithProgression(5);
	prog->printProgression(10);
	return EXIT_SUCCESS;			// successful execution
}