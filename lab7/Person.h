#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Person {

	private:
        string ssn;
        int age;
	public:
        Person(string ssn, int age) {
            this->ssn = ssn;
            this->age = age;
        }
        string getSSN() const {
            return ssn;
        }
        int getAge() const {
            return age;
        }

        friend ostream& operator<<(ostream& os, const Person& p);
};

ostream& operator<<(ostream& os, const Person& p) {
    os << "person: ssn = " << p.getSSN() << " age = " << p.getAge()  ;
    return os;
}

#endif // POINT2D_H_INCLUDED
