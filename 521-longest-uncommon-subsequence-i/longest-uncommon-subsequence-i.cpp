int max_ucs(string a, string b){
     int res = -1;
     // a.size() has type 'size_t'
     for (int i=(int)a.size();i>=1;i--){
            if (b.find(a.substr(0, i)) == string::npos){
                res = i;
                break;
            };
        };
    return res;
}

class Solution {
public:
    int findLUSlength(string a, string b) {
       return max(max_ucs(a, b), max_ucs(b, a));
    }
};