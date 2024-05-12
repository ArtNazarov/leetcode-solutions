#include <vector>
using namespace std;

bool palin(string& s1, string& s2){
    if (s1.size()!=s2.size()) return false;
    int i = 0;
    int j = s2.size()-1;
    while (i<s1.size()){
        if (s1[i]!=s2[j]) return false;
        i++;
        j--;
        if (i==j) break;
    };
    return true;
}

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        for (auto i=0;i<words.size()-1;i++){
          for (auto j=i+1;j<words.size();j++){
            if (palin(words[i], words[j])) 
                {
                    // cout << words[i] << " " << words[j] << endl;
                    cnt++;
                };
            };  
        };
        return cnt;
    }
};