#include <iostream>
#include "DLinkedList.h"

int main() {
	DLinkedList test_list;
	char cmd = 'H';
	while (cmd != 'q' && cmd != 'Q') {
		try {
			string elem;
			if (cmd == 'h' || cmd == 'H') {
				cout << "\nDemo for DLinkedList. Takes a string.\n";
				cout << "Commands:\n";
				cout << "1. Add to front.\n";
				cout << "2. Add to back.\n";
				cout << "3. Remove from front.\n";
				cout << "4. Remove from back.\n";
				cout << "H. Re-list Commands.\n";
				cout << "Q. Quit.\n";
			}

			cout << "Command: ";
			cin >> cmd;
			switch (cmd) {
			case '1':
				cout << "String to add to front: ";
				cin >> elem;
				test_list.addFront(elem);
				cout << elem << " was added to the front.\n";
				break;

			case '2':
				cout << "String to add to back: ";
				cin >> elem;
				test_list.addBack(elem);
				cout << elem << " was added to the back.\n";
				break;

			case '3':
				elem = test_list.front();
				test_list.removeFront();
				cout << elem << " was removed from the front.\n";
				break;

			case '4':
				elem = test_list.back();
				test_list.removeBack();
				cout << elem << " was removed from the back.\n";
				break;

			case 'h':
				break;
			case 'H':
				break;
			case 'q':
				break;
			case 'Q':
				break;

			default:
				cout << "Please give a valid input.\n";
				break;
			}
		}
		catch (string e) {
			cout << "Error: " << e << ".\n";
		}
	}
	return 0;
}