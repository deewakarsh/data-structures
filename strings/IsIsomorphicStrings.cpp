#include <iostream>
#include <string>
#include <map>

using namespace std;

bool isIsomorphic(const string& s, const string& t)
{
    if(s.size() != t.size()) 
        return false;

    map<char, char> freqMap;
    for (int i=0; i< s.size(); i++)
    {
        if(freqMap.find(s[i]) != freqMap.end())
        {
            if((freqMap[s[i]] != t[i]))
            {
                return false;
            }
        }
        freqMap[s[i]] = t[i];
    }

    return true;
}

int main()
{
    string s, t;

    cout <<"Enter 1st string: "<< endl;
    cin >> s;

    cout <<"Enter 2nd string: "<< endl;
    cin >> t;

    cout << "strings are Isomorphic: " << isIsomorphic(s, t) << endl;

    return 0;
}

