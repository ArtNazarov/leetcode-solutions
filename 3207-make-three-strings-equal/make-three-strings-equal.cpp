#include <vector>
using namespace std;

void doOp(string&s , int& cnt){
    s.erase(s.size()-1, 1);
    cnt++;
}

void log(vector<string>& s, int cnt){
    cout << cnt << " "; for (auto x : s) cout << x << " "; cout << endl;
}

bool comp(vector<string>& s){
    return (s[0] == s[1] && s[1] == s[2]);
}

bool notemp(vector<string>& s){
    return (s[0] != "" && s[1] != "" && s[2] != "");
}

size_t getMinSz(vector<string>& s){
    size_t minSz = min(s[0].size(), s[1].size());
    minSz = min(minSz, s[2].size());
    return minSz;
}

size_t getMaxSz(vector<string>& s){
    size_t maxSz = max(s[0].size(), s[1].size());
    maxSz = max(maxSz, s[2].size());
    return maxSz;
}

class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        vector<string> s = {s1, s2, s3};
        int cnt = 0;
        int minSz = getMinSz(s);  
        //cout << "minSz =" << minSz << endl;  
           
            if (comp(s)) return cnt;
           
            for(int i=0;i<3;i++){
                 while (s[i].size()>minSz) doOp(s[i], cnt);
            };
            //cout << cnt << endl;
            if (comp(s) && notemp(s)) return cnt;
            while (!comp(s)&&notemp(s)){
               for(int i=0;i<3;i++){
                 doOp(s[i], cnt);
                }; 
            };
             
        
        return comp(s) && notemp(s) ? cnt : -1;
    }
};