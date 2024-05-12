#include <map>
#include <vector>
using namespace std;


void getF(string& s, map<char, int>& f){
    f.clear();
    for(char ch : s) f[ch]++;
}

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>& w = words;
        map<string, map<char, int>> m;
        for(auto s : w){
            if (m.find(s)==m.end()) getF(s, m[s]);
        }
        
         
        int i = 1;
        while (i<w.size()) {
            int j = i - 1;
            bool del = false;
            while (j<w.size()){
                //cout << "should delete i="<< i << endl;
                if  (m[w[i]] == m[w[j]]) { j++; del = true; } else break;
            };
            if (del) w.erase(w.begin()+i, w.begin()+j);
            i = i + 1;
            //cout << "i=" << i << " " << "j=" << j << endl;
            //for(auto s : w){ cout << " " << s << " "; }; cout << endl;
        };
        return words;
    }
};