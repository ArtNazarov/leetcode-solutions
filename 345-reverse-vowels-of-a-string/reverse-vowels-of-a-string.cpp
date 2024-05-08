#include <deque>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
       deque<char> st;
       for (auto ch : s){
        char lch = tolower(ch);
        if (lch =='a' || lch == 'e' || lch == 'i' || lch == 'o' || lch == 'u')
            st.push_front(ch);
       };
       int sz = s.size();
       for (int i=0;i<sz;i++){
        char ch = tolower(s[i]);
        if (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            s[i] = st.front();
            st.pop_front();
            };
       };
       return s;
    }
};