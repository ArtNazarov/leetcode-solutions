string rep(string& s, const int count){
    string res = "";
    for (size_t i=1; i<=count;i++) res+=s;
    return res;
}

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string k = str1;
        if (str2.size()<str1.size()) k = str2;
        string res = "";
        for (int i=k.size()-1; i>=0;i--){
            
            string s = k.substr(0, i+1);
            // cout << s << endl;
            int m = str1.size() / s.size();
            int n = str2.size() /  s.size();
            
            string rm = rep(s, m);
            string rn = rep(s, n);
            
            // cout << n << " " << rn << endl;
            // cout << m << " " << rm << endl;
            
            if (rn == str2 && rm == str1){
                res = s;
                break;
            };
        };
        return res;
    }
};