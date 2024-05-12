// using to_string
class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size()>k){
            string t = "";
            string buf = "";
            for(auto ch : s){
                buf += ch;
                if (buf.size()==k){
                    int s = 0;
                    for(auto ch : buf){
                        s += ch - '0';
                    };
                    t+=to_string(s);
                    buf = "";
                };
            };
            if (buf!=""){
                    int s = 0;
                    for(auto ch : buf){
                        s += ch - '0';
                    };
                    t+=to_string(s);
            };
            s = t;
        };
        return s;
    }
};