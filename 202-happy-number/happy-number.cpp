class Solution {
public:
bool isHappy(int n) {
   bool flag = false; 
   unordered_map<int, int> prev; // previous sums
   while(!flag){
  
   if (1==n) {
       flag = true;
       break;
   }
   int sum = 0;
  
   int digit;
   while (n != 0){
       digit = n % 10;
       // cout << "Digit " << digit << endl;
       // cout << "N is " << n << endl;
       sum += digit * digit;
       // cout << sum << endl;
       n = n >> 1;
       n /= 5;
      
   };
   
      
   n = sum;
     
     if (prev[n]==0){
       // not found
     prev[n]++;
     } else {
       // cycle!
       // cout << "Cycle with " << n << endl;
       flag = false;
       break;
     };
     
    // cout << n << endl;
   };
   return flag;
}
};