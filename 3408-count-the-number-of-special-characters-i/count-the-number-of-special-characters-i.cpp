#include <set>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> lw;
        set<char> up;
        set<char> st;
        for(auto ch : word){
            char cu = toupper(ch);
            char cl = tolower(ch);
            if (st.find(cu)!=st.end()) continue;
            if (st.find(cl)!=st.end()) continue;
            // cout << ch << endl;
            bool fL = false;
            bool fU = false;

         
            
            if (ch == cl) { lw.insert(ch); fL = true; }
            if (ch == cu) { up.insert(ch); fU = true; };
            if (fL){
                if (up.find(cu)!=up.end()) st.insert(cl);
            };

            if (fU){
                if (lw.find(cl)!=lw.end()) st.insert(cl); 
            };
        };
        

       
        
        
        return st.size();
    }
};