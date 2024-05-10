// Solution with 4 indexes
bool isPalin(string& s){
    int l = 0;
    
    int r = s.size()-1;

    int m = r / 2;

    int l1 = m;
    int r1 = m + 1;

    if (s.size()%2!=0) {l1=m-1; r1=m+1;}; 

    while (l < r){
        if (s[l]!=s[r]) return false;
        l++;
        r--;
        if (l1>=0 && r1<s.size()){
            if (s[l1]!=s[r1]) return false;
        };

        r1++;
        l1--;
        //if (l1<l && r1 > r) break;
    };
    return true;
}


class Solution {
public:
    bool validPalindrome(string s) {
    
       int l = 0;
       int r = s.size()-1;
       while (l<r && s[l]==s[r]){
        l++;
        r--;
       };
       if (l>=0 && r<s.size()){
         string s1 = s;
         string s2 = s;
         s1.erase(l,1);
         s2.erase(r,1);
         // cout << s1 << " " << s2 << endl;
         if (isPalin(s1) || isPalin(s2)) return true;
       };
       return false;
    }
};