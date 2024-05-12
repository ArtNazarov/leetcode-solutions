// Using functions

bool testSeq(string& s, int k){
    int cnt = 0;
    for(auto i=1;i<s.size();i++){
            if (s[i]==s[i-1] && s[i]=='B'){
                cnt++;
                
                if (cnt == k) return true;
            } else if (s[i]=='W'){
                cnt = 0;
            }
        };
    return false;
}

int counter(string blocks, int k){
    int cnt = 0;
        
        int i = 0;
        int chg = 0;
        cnt = 0;
        do {
            while (i<blocks.size() && blocks[i]=='W'){
                blocks[i] = 'B';

                i++;
                chg++;
                cnt++;
                if (cnt == k) return chg;
            };
            while (i<blocks.size() && blocks[i]=='B'){
                cnt++;
                i++;
                if (cnt == k) return chg;
            };
        } while (i<blocks.size());
        return chg;
}


class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        if ( testSeq(blocks, k)) return 0;
        int l = INT_MAX;
        for(auto i=0;i<blocks.size();i++){
  
            string sb = blocks.substr(i, blocks.size()-i);
            if (sb.size()<k) continue;
            l = min(l, counter(sb, k));
        }
        return l;
    }
};