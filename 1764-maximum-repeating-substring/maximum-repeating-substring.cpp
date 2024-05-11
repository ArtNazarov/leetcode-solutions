// Using standard find function
class Solution {
public:
    int maxRepeating(string sequence, string word) {
      int k = sequence.size() / word.size();
      for (int m=k;m>=1;m--){
         string s = "";
         for (int i=0;i<m;i++) s+=word;
         if (string::npos!=sequence.find(s)) return m;
      };
      return 0;
    }
};