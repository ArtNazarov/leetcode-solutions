int cntVow(string& s){
 unordered_set<char> st = { 'a', 'e', 'i', 'o', 'u'};
 int cnt = 0;
 for (auto ch : s){
    char t = tolower(ch);
    if (st.find(t)!=st.end()) cnt++;
 };
 return cnt;
}

class Solution {
public:
    bool halvesAreAlike(string s) {
    
     int mid = s.size() / 2;
     string s1 = s.substr(0, mid);
     string s2 = s.substr(mid, mid);
     //cout << s1 << " " << s2 << endl; 
     return cntVow(s1) == cntVow(s2);   
    }
};