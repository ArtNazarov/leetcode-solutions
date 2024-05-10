void rem(string& s){
    bool flag = true;
    while (true){
        int ps = s.find('#');
        if (ps==string::npos) break;
        if (ps==0) s.erase(0, 1); else
        s.erase(ps-1, 2);
    };
    //cout << s << endl;
  
} 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
       rem(s); rem(t);
       return s.compare(t) == 0;
    }
};