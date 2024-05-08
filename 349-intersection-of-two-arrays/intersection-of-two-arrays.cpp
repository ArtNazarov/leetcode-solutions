#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       ranges::sort(nums1);
       ranges::sort(nums2);
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        vector<int> v;
        int last_val = INT_MIN;
       do {
        if (it1 == nums1.end()) break;
        if (it2 == nums2.end()) break;
        
            if (*it1 == *it2){
                if (last_val != *it1) v.push_back(*it1);
                last_val = *it1;
                it1 = next(it1);
                it2 = next(it2);
                if (it1 == nums1.end()) break;
                if (it2 == nums2.end()) break; 
            } else  {
                    // cout << *it1 << " " << *it2 << endl;
                    if (*it1 < *it2) { 
                        it1 = next(it1);
                        if (it1 == nums1.end()) break;
                        } else if (*it1 > *it2){
                        it2 = next(it2);
                        if (it2 == nums2.end()) break; 
                     };
            };
           
        } while (it1 != nums1.end() && it2 != nums2.end());
         return v;

    }
};