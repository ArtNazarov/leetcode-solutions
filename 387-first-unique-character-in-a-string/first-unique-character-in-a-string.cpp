#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_set<char> U;
        unordered_set<char> D;
        for (auto ch : s){
            if ( U.find(ch)!=U.end() ){
                U.erase(ch); // U is set of uniq values
                D.insert(ch); // D is set of dublicates
            } else {
                // check that not dublicate
                if (D.find(ch)==D.end()) {
                    U.insert(ch); // may be uniq
                };
            };
        };
        
        for (int i=0; i<s.size(); i++){
            if (U.find(s[i])!=U.end()){
                return i;
            };
        };
        
        return -1;
    }
};