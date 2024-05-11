class Solution {
public:
    int countOdds(int low, int high){
      bool flag = (low % 2 == 0);
      if (high == low && flag){
        return 0;
      } else if (high == low && !flag) {
        return 1;
      };
      if ( flag ) low++;  
      return   ((high-low) >> 1) +1 ;
    }
};