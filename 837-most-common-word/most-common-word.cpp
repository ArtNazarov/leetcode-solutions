// Using transform and lambda
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        sort(banned.begin(), banned.end());

        string temp = "";
        for (auto ch: paragraph){
            char x = ch;
            if (ch == ',') x = ' ';
            if (ch == '.') x = ' ';
            if (ch == '?') x = ' ';
            if (ch == '!') x = ' ';
            if (ch == ';') x = ' ';
            if (ch == '\'') x = ' ';
            if (ch == '\"') x = ' ';
            temp+=x;
        } 
        paragraph = temp;

        stringstream ss(paragraph);
        string w;
        map<string, int> f;
        
        string res = "";
        int mx = 0;



        while (ss >> w) {
            
        
        transform(w.begin(), w.end(), w.begin(),  [](auto ch){return tolower(ch);});
            
            
        // cout << w << endl;
            if (find(banned.begin(), banned.end(), w) == banned.end()){
            f[w] ++;
            if (f[w]>mx) { res = w; mx = f[w]; };
            };    
        };
        return res;     
    }
};