class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
      if (m > arr.size()) return false;
      int count = 0;
      for (size_t i=0; i + m < arr.size(); i++ ){
        
        if (arr[i]==arr[i+m]){
            count++;
            }
        else {
            count=0;
        };
         
        if (m * (k-1) == count) {
            return true;
        };



      };

  
      return false;       
    }
};