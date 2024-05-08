class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
       string cleared = "";
       for (auto ch : s){
        if (ch!='-') cleared+=toupper(ch);
       };
       string buf = "";
       vector<string> parts;
       int sz = cleared.size();
       for (int i=sz-1; i>=0; i--){
            if (buf.size()<k){
                buf = cleared[i] + buf;   
            }
           else {
                parts.push_back(buf);
                buf = cleared[i];
           };
        };
        if (buf != ""){parts.push_back(buf);};
        reverse(parts.begin(), parts.end());
        string res = "";
        for (auto w : parts) res+='-'+w;
        res.erase(0, 1);
        return res;
    }
};