#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <climits>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        ranges::sort(arr);
        vector<vector<int>> res;
        int mn = INT_MAX;
        for (int i=arr.size()-1;i>=1;i--){
            mn = min(mn, arr[i]-arr[i-1]);
        };
        for (int i=1; i<arr.size(); i++){
            int x = arr[i] - arr[i-1];
            if (x  == mn){
                res.push_back({  arr[i-1], arr[i] });
            };
        };
        return res;  
    }
};