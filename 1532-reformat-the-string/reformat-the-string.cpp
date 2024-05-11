class Solution {
public:
    string reformat(string s) {
        vector<int> digits;
        vector<int> syms;
        // filtering
        for (auto ch : s){
            if (isdigit(ch)) digits.push_back(ch);
            if (isalpha(ch)) syms.push_back(ch);
        };
        if (syms.size()>=digits.size()+2) return "";
        if (digits.size()>=syms.size()+2) return "";
        string res = "";
        if (syms.size()>digits.size()){
        for (auto ch : syms){
            res += ch;
            if (!digits.empty()){
                res += digits[0];
                digits.erase(digits.begin(), digits.begin()+1);
            };
        };
        } else {
           for (auto ch : digits){
            res += ch;
            if (!syms.empty()){
                res += syms[0];
                syms.erase(syms.begin(), syms.begin()+1);
            };
        }; 
        };
        return res;
    }
};