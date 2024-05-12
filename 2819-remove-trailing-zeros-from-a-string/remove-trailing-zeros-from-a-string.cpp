// using ref variable
class Solution {
public:
    string removeTrailingZeros(string num) {
        
        
        string& s = num;
            int ps = 0;
            while  (ps < s.size()) {
                if (s[ps]!='0') break; 
                ps++;
                };
            if (ps < s.size()) s.erase(0, ps);
            //cout << s << endl;
            ps = s.size()-1;
            do {
                    if (s[ps]!='0') break;
                ps--; 
                 
            } while (ps>=0);
            s.erase(ps+1);
            return s;
       }
       
};