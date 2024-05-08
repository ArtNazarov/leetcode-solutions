class Solution {
public:
    void reverseString(vector<char>& s) {
       int N = s.size();
       int middle = N >> 1;
       for (int i=0;i<middle;i++){
           int right = N-1-i;
           if (s[i]!=s[right]){
            swap(s[i], s[right]);
           }
       };
    }
};