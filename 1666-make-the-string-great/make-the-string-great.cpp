class Solution {
public:
    string makeGood(string s) {
        bool d = true;
        while (d){
            d = false;
            for (size_t i=1;i<s.size();i++){
                // cout << s[i-1] << " " << s[i] << endl;
                if (tolower(s[i-1])==tolower(s[i]) && s[i]!=s[i-1]){
                   // cout << "x" << s[i-1] << " " << s[i] << endl;
                    s.erase(i-1, 2);
                    d = true;
                }
            };
        };
        return s;
    }
};