#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         
     
     unordered_set<int> st;
       sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

       for (auto e : nums1){
           if (binary_search(nums2.begin(), nums2.end(), e))  st.insert(e);
       };

       for (auto e : nums2){

           if (st.find(e)==st.end()){
               st.erase(e);
        };
       };



      vector<int> res;
      for (auto key : st){
          res.push_back(key);
    };
      return res;

    }
};