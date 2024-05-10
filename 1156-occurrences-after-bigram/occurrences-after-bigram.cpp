// Solution with string stream
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string w;
        vector<string> t;
        vector<string> res;
        while (ss >> w){
            t.push_back(w);
        };
       
        for (int i = 0; i<t.size()-1; i++){
            if (t[i]==first && t[i+1] == second && (i+2)<t.size()) {
                    res.push_back(t[i+2]);
                };
        };
       
      
       
         return res;
    }
};