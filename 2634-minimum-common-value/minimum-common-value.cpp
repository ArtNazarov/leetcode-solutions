#include <vector>
#include <algorithm>
#include <set>
#include <ranges>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ranges::sort(nums1);
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end()); 
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        set<int> st;
        for (int i = 0; i < nums1.size(); i++){
            st.insert(nums1[i]);
        };
        for (int i = 0; i < nums2.size(); i++){
            if (st.find(nums2[i]) != st.end()){
            return nums2[i];
            };
        };
        return -1;   
    }
};