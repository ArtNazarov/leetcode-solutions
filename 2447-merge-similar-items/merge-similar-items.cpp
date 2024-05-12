#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> s;
      for(auto v : items1){
        int key = v[0];
        int val = v[1];
        s[key]+=v[1];
      };
      for(auto v : items2){
        int key = v[0];
        int val = v[1];
        s[key]+=v[1];
      };
      vector<vector<int>> res;
      for(auto p : s){
        res.push_back({p.first, p.second});
      };
       
      return res;
    }
};