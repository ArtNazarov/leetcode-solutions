class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt_l, cnt_r, cnt_s;
      cnt_l = cnt_r = cnt_s = 0;
      for (auto ch : moves){
        if(ch=='R') cnt_r++;
        if(ch=='L') cnt_l++;
        if (ch=='_') cnt_s++;
       };
       return  abs(cnt_r-cnt_l)+cnt_s; 
    }
};