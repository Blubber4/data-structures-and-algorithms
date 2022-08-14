#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

class WordCounter {
public:
    int value; // count of the word is the value for the map
    WordCounter() : value(0) { };

    void operator++(int) { value++; }
};

const string path = "D:\\programming3\\Lab8\\war.txt";

ostream& operator<<(ostream& st, WordCounter &wc) {
    return st << wc.value;
}

int main()
{
    map<string, WordCounter> counter;
    ifstream input;
    input.open(path.c_str());

    if (!input) {
        cout << "Can't open file" << endl;
        return 0;
    }

    string token;
    while (input >> token) {
        counter[token]++;
    }

    input.close();

    map<string, WordCounter>::iterator it;

    for (it = counter.begin(); it != counter.end(); it++) {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    cout << "war count = " << counter["war"] << endl;

    cout << counter.count("war") << endl;

    return 0;
}
