class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        unordered_set<char> st = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};
       bool szCheck = password.size() >= 8;
       if (!szCheck) return false;
       bool lwCheck = false;
       bool upCheck = false;
       bool spCheck = false;
       bool smCheck = true;
       bool dgCheck = false;
       char prev = ' ';
       for(auto ch : password){
        if (ch>='a' && ch <= 'z') lwCheck = true;
        if (ch>='A' && ch <= 'Z') upCheck = true;
        if (st.find(ch)!=st.end()) spCheck = true;
        if (ch>='0' && ch <= '9') dgCheck = true;
        smCheck = smCheck && !(prev == ch);
        if (!smCheck) return false;
        prev = ch;
       };


       return szCheck && lwCheck && upCheck && spCheck && smCheck && dgCheck;
    }
};