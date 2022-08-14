#include <iostream>

#include <queue>

#include "Person.h"
#include "SSNComparator.h"
#include "AgeComparator.h"

using namespace std;

int main()
{
    priority_queue<Person, vector<Person>, SSNComparator> p2;
    priority_queue<Person, vector<Person>, AgeComparator> p3;

    p2.push( Person("123456789", 25));			// add three points to p2
    p2.push( Person("987654321", 43));
    p2.push( Person("135792468", 18));

    cout << p2.top() << endl;  p2.pop();		// output: (8.5, 4.6)
    cout << p2.top() << endl;  p2.pop();		// output: (2.5, 0.6)
    cout << p2.top() << endl;  p2.pop();		// output: (1.3, 5.7)

    cout << "\n\n";
    p3.push( Person("921489126", 37));
    p3.push( Person("438919043", 67));
    p3.push( Person("198731923", 19));

    cout << p3.top() << endl;  p3.pop();
    cout << p3.top() << endl;  p3.pop();
    cout << p3.top() << endl;  p3.pop();
    return 0;
}
