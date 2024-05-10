#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
  
       vector<string> res;
       if (words.size()==0) { return res;};
        if (words.size()==1) {
            ranges::sort(words[0].begin(),words[0].end());
            words[0].erase(unique(words[0].begin(), words[0].end()), words[0].end());
            return res;
        };
        vector<char> inter;
        vector<char> s;
        for (auto ch : words[0])
            s.push_back(ch);

       sort(s.begin(), s.end());
       // s.erase(unique(s.begin(), s.end()), s.end());
         vector<char> z1;
        for (int i=1;i<words.size();i++){
             z1.clear();
             inter.clear();
             for (auto ch : words[i]) z1.push_back(ch);
            ranges::sort(z1.begin(), z1.end());
            //z1.erase(unique(z1.begin(), z1.end()), z1.end());
            set_intersection(s.begin(), s.end(), z1.begin(), z1.end(), back_inserter(inter) );
            z1.clear();
            s = inter;
        };
        for (char ch : s){
            string r;
            r += ch;
            res.push_back(r);
        };
        return res;        
    }
};