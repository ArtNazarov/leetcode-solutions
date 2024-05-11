class Solution {
public:
    int maximum69Number (int num) {
       string s = to_string(num);
       const size_t sz = s.size();
       for(auto i=0;i<sz;i++){
        if (s[i]=='6') { s[i]='9'; break; };
       };
       return stoi(s);
    }
};