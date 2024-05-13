#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
      int sum = 0;
      map<int, int> mm;
      for (auto e : nums){
         if (mm.find(e)!=mm.end()){
            sum += mm[e];
         } else {
            int d = 0;
            int max_d = 0;
            int t = e;
            int val = 0;
            while (t>0){ 
                val = val*10+1;
                max_d = max(max_d, t % 10); 
                t/=10;
            };
            val *= max_d;
            sum+=val;
            mm[e] = val; 
         };
       
      }  
        return sum;
    }
};