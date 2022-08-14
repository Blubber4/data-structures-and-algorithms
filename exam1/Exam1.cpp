/*  QUESTION 2
#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

bool checkDistinct(vector<int> values) {
	for (int i = 0; i < values.size(); i++) {
		for (int j = i + 1; j < values.size(); j++) {
			if (values[i] == values[j]) return false;
		}
	}
	return true;
}

void printVect(vector<int> values) {
	for (int i = 0; i < values.size(); i++) {
		cout << values[i] << " ";
	}
}

int main()
{
	vector<int> not_distinct = { 1, 5, 7, 2, 4, 6, 37, 103, 5 };
	vector<int> distinct = { 17, 12, 16, 103, 4, 5, 14, 22 };
	cout << "Vector 1: ";
	printVect(not_distinct);
	cout << "\nVector 2: ";
	printVect(distinct);
	cout << "\n\nVector 1: " << checkDistinct(not_distinct);
	cout << "\nVector 2: " << checkDistinct(distinct);
}
*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	const int size = 10;
	int example[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int user_input;

	try {
		cout << "Input position of the element you would like to display: ";
		cin >> user_input;
		if (size < user_input) throw string("Out of bounds error");
		cout << example[user_input-1];
	}
	catch (string error) {
		cout << "Error: " << error;
	}
}