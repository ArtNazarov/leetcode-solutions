class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       ranges::sort(arr); 
       int x = arr[0];
       int diff = arr[1]-arr[0];
       for (size_t i=1;i<arr.size();i+=1){
            if (arr[i]-arr[i-1]!=diff) return false;
       };
       return true;
    }
};