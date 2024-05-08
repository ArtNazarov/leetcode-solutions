class Solution {
public:
  int addDigits(int num) {
    
         do {
           int sum = 0;
           while (num != 0){
             sum+=num%10;
             num = num >> 1;
             num/=5;
           };
           num = sum;
         } while ( num >= 10);
         return num;
       }
};