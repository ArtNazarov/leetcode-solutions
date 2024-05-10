#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_set<char> st;
        map<char, int> fS;
        for (auto ch: chars){
            st.insert(ch);
            fS[ch]++;
        }
        int sm = 0;
        map<char, int> f;
        for (auto w : words){

          
            

             bool isGood = true;
             for (auto ch : w){
                 if (st.find(ch)==st.end()) { isGood = false; break;};
                
            };
            if (isGood){
                f.clear();
                for (auto ch : w){
                    f[ch]++;
                }
              for (auto ch : w){
                 if (f[ch]>fS[ch]) { isGood = false; break;};
              };   
            };
           // if (isGood) { cout << w << endl; };
            if (isGood) sm+=w.size();
        };
       // for (auto x : st) cout << x << endl;
            return sm;   
    }
};