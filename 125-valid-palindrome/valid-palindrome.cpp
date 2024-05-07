class Solution {
public:
    bool isPalindrome(string s) {
        
        string t = s;
        s = "";
        for(auto ch : t){
            if (ch!=' ' && isalnum(ch)){
                s += tolower(ch);
            };
        };
        //cout << s << endl;
        int sz = s.size();
        if (sz<=1) return true;
        int l = 0;
        
        int r = sz-1;

        int m = r / 2;

        int l1 = m;
        int r1 = m + 1;

        if (sz%2!=0) {l1=m-1; r1=m+1;}; 

        while (l < r){
            if (s[l]!=s[r]) return false;
            l++;
            r--;
            if (l1>=0 && r1<sz){
                if (s[l1]!=s[r1]) return false;
            };

            r1++;
            l1--;
            if (l1<l && r1 > r) break;
        };
        return true;
    }
};