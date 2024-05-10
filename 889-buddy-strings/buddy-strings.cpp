class Solution {
public:
    bool buddyStrings(string s, string goal) {
         int sz = s.size();
         map<char, int> fS;
         map<char, int> fG;
         
         for (auto ch : s) { 
            fS[ch]++; 
           
         };
         for (auto ch : goal) {
             fG[ch]++; 
              
        };
         if (fS != fG) return false;

          int diff = 0;
          for (size_t i=0;i<sz;i++){
            if (s[i]!=goal[i]) diff++;
            
          
          };
            if (diff == 2) return true;
             if (diff != 0) return false;
          for (auto p : fS) if (p.second >= 2) return true;
        return false;
    }
};