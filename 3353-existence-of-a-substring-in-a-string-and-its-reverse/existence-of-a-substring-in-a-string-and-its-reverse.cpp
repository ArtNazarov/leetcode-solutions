#include <algorithm>
using namespace std;

class Solution {
public:
    bool isSubstringPresent(string s) {
        string rv = s;
        string v = s;
        reverse(rv.begin(), rv.end());
        
        int rotation = 0;
        int g = 2;
        do {
        
        for (int k = 1; k<=s.size()-1; k++){
            string pattern = v.substr(0, g);
            cout << pattern << endl;
            bool findInS = s.find(pattern) != string::npos;
            bool findInR = rv.find(pattern) != string::npos;
            if (findInS && findInR) return true;
             rotate(v.begin(), v.begin()+1, v.end()); 
             rotation++;
        };
         
          g++;
        } while (g<s.size()-1);
        return false;
    }
};