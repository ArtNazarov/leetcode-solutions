#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        vector<int> s;
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(s));
         for (int x : s) res.push_back(x); s.clear();
        vector<int> s2;
        set_intersection(nums2.begin(), nums2.end(), nums3.begin(), nums3.end(), back_inserter(s2));
         for (int x : s2) res.push_back(x); s2.clear();
        vector<int> s3;
        set_intersection(nums1.begin(), nums1.end(), nums3.begin(), nums3.end(), back_inserter(s3));
         for (int x : s3) res.push_back(x); s3.clear();
        
       
       
       
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
        

    }
};