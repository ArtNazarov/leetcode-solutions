

class Solution {
public:
    int countBinarySubstrings(string s) {
        
         
        
        size_t sz = s.size();
        int cntTotal = 0;
        int seq = 1; 
        int prev_seq = 0;
        for (size_t k=1;k<sz;k++){
            
            if (s[k]!=s[k-1]){
                cntTotal += min(prev_seq, seq);
                prev_seq = seq;
                seq = 1;
            } else {
                seq ++ ;
            };

        }; 
        cntTotal += min(prev_seq, seq);
        return cntTotal;
    }
};