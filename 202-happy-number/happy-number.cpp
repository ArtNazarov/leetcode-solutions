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
   vector<int> v;
   while (n != 0){
       digit = n % 10;
       // cout << "Digit " << digit << endl;
       // cout << "N is " << n << endl;
       v.push_back(digit * digit);
       // cout << sum << endl;
       n = n >> 1;
       n /= 5;
      
   };
   for(auto d : v){
    sum += d;
   }
   
      
   n = sum;
     
     if (prev[n]==0){
       // not found
     prev[n] = 1;
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