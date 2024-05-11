bool isNice(string& s){
    unordered_map<char, int> f;
    for(auto ch : s){
        f[ch] ++;
    };
    bool ok = true;
    for(auto p : f){
        auto ch = p.first;
        auto cnt = p.second;
        if (ch == toupper(ch)){
            ok = ok && ( f[tolower(ch)] >= 1);
        } else {
            ok = ok && ( f[toupper(ch)] >= 1);
        }; 
    };
    return ok;
}


class Solution {
public:
    string longestNiceSubstring(string s) {
      string b = "";  
      int cnt = 0;
      vector<string> nices;
      for(auto i=0;i<s.size();i++){
        b = s[i];
        int j = i + 1;
        int t = i;
        while (j<s.size()) {
            b+=s[j];
            if (isNice(b)) { nices.push_back(b); t = j; };
            j++;
        };
        i = t;
      };
      int l = INT_MIN;
      for(auto n : nices){
        // cout << n << endl;
        l = max(l, (int) n.size());
      };
      // cout << "max l:" << l << endl;
      for(auto n : nices){
        if (n.size()==l) return n;
      };
      return "";
    }
};