#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    std::map<string, vector<string>> word_map;

    vector<string> v0;
    v0.push_back("http://www.corvetteforum/1");
    v0.push_back("http://www.digitalcorvettes/1");
    v0.push_back("http://corvetteforum/2");
    v0.push_back("http://www.corvetteforum/3");
    word_map.insert(pair<string, vector<string>>("corvette", v0));

    vector<string> v1;
    v1.push_back("http://www.corvetteforum/1");
    v1.push_back("http://www.digitalcorvettes/1");
    v1.push_back("http://www.wsj/1");
    word_map.insert(pair<string, vector<string>>("1972", v1));

    map<string, vector<string>>::iterator itr0;
    itr0 = word_map.find("corvette");
    if (itr0 != word_map.end()) {
        std::sort(itr0->second.begin(), itr0->second.end());
    }

    map<string, vector<string>>::iterator itr1;
    itr1 = word_map.find("1972");
    if (itr1 != word_map.end()) {
        std::sort(itr1->second.begin(), itr1->second.end());
    }

    if (itr0 == word_map.end() || itr1 == word_map.end()) {
        cout << "no results found" << endl;
    } else {
        std::vector<string> result_vector;

        std::set_intersection(itr0->second.begin(), itr0->second.end(), itr1->second.begin(),
                              itr1->second.end(), back_inserter(result_vector));

        for (std::vector<string>::iterator it = result_vector.begin();
            it != result_vector.end();
            ++it) {

            cout << "***" << '\t' << *it << endl;
        }

        for (string url : result_vector) {
            cout << ">>>" << '\t' << url << endl;
        }
    }
    return 0;
}
