

#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    template<typename T>
    void skip(vector<T>& source,  typename vector<T>::iterator& it, int& cnt, T last_val){
        while (it != source.end()) {
                        if (last_val != *it) break;
                        cnt++;
                        it = next(it);
                    };
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
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
                last_val = *it1;
               int d1 = 0;
               int d2 = 0;
                skip<int>(nums1, it1, d1, last_val);
                skip<int>(nums2, it2, d2, last_val);
                int sz = min(d1, d2);
                for(auto i = 0; i < sz ; i++) v.push_back(last_val);
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