// using rfind
class Solution {
public:
    bool checkString(string s) {
        int ps =  s.rfind('a');
        int ps_b = ps - 1;
        int sz = s.size();
        bool no_b = true;
        while (ps_b>=0 && ps_b<sz) {
            if (s[ps_b]=='b') { no_b  = false; break; };
            ps_b--;
        };
         
        return   no_b ; 
    }
};