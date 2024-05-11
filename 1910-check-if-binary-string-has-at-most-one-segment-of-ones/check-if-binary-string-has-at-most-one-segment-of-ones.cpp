 
class Solution {
public:
    bool checkOnesSegment(string s) {
       
         string t(s);
         ranges::sort(t.begin(), t.end(), [](auto a, auto b){return a > b;});
         return t == s;
    }
};