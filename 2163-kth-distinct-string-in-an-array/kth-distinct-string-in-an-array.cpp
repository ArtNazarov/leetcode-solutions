class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       unordered_map<string, int> f;
       int cnt = 0;
       for(auto x : arr){
         f[x]++;
       };
       for(auto x : arr){
         if (f[x]==1) cnt++;
         if (cnt == k) return x;
       };
       
        return "";
    }
};