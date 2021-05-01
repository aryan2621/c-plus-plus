// maps in c++;

#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    // helps in storing key value pairs.
    // map is an associative array.

    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Rishabh"] = 95;
    marksMap["Anirudh"] = 68;

    marksMap.insert({{"Anamika", 198}, {"Shubham", 88}});
    // a single element of insert

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // alphabetically
        // *iter.first -> key // *iter.second-> value;
    }
    cout << "The size is " << marksMap.size() << endl;

    return 0;
}