// Using functions
string pattern(char ch1, char ch2, int n){
    string s = "";
    bool use_f = true;
    for (int i=0;i<n;i++){
        char ch = (use_f) ? ch1 : ch2;
        s += ch;
        use_f = !use_f;
    };
    return s;
}

int compare(string& s1, string& s2){
    int n = 0;
    for (int i=0;i<s1.size();i++){
        n += (s1[i]!=s2[i]) ? 1 : 0;
    };
    return n;
}

class Solution {
public:
    int minOperations(string s) {
      int sz = s.size();
      string s0 = pattern('0', '1', sz);
      string s1 = pattern('1', '0', sz);
      return min(compare(s, s0), compare(s, s1));
    }
};