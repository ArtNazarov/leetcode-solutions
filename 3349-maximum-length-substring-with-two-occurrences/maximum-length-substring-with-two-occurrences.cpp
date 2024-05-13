#include <map>
using namespace std;

bool hasTwoOcc(string& s){
     
   // cout << "test " << s << endl;
    map<char, int> f;
    for(auto ch : s){
        f[ch]++;
        if (f[ch]>=3) return false;
    };
    
    return true;
}

class Solution {
public:
    int maximumLengthSubstring(string s) {
   
     string res = "";
     int szS = s.size();
     for(int i=0;i<szS;i++){
        string sb = s.substr(i, szS-i);
        int sz = res.size();
        if (sb.size()<=sz) continue;
        while (sb.size()>sz){
            if (hasTwoOcc(sb)) { res = sb; break; };
            sb.erase(sb.size()-1, 1);
        };
     };
     // cout << res << endl;
     return  res.size();
    }
};