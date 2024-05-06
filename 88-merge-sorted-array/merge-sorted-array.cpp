#include <map>
#include <vector>
#include <iostream>
#include <set>
 
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // counter frequency V of key K
        map<int,int> counter;
        // set of traversed values
        set<int> uniq_values;

        vector<int> nums1v;
        vector<int> nums2v;
        // copy first m values to nums1v
        copy(nums1.begin(), nums1.begin()+m, back_inserter(nums1v));
        // copy first n values to nums2v
        copy(nums2.begin(), nums2.begin()+n, back_inserter(nums2v));

      
        // Count frequencies

        for (auto e : nums1v) {
            if (uniq_values.count(e)) {
                counter[e] ++;
            } else {
                counter[e] = 1;
                uniq_values.insert(e);
            };
        };
        for (auto e : nums2v) {
            if (uniq_values.count(e)) {
                counter[e] ++;
            } else {
                counter[e] = 1;
                uniq_values.insert(e);
            };
        };
        // Traverse map
        vector<int> res;
        for (auto it=counter.begin();it!=counter.end();++it){
            auto key = it->first;
            auto repeats = it->second;
            // cout << key << " repeats " << repeats << endl;
            fill_n(back_inserter(res), repeats, key);
        };
        int sz = res.size();
        for(auto i=0;i<sz;i++){
            if (i<nums1.size()) nums1[i] = res[i]; else nums1.insert(nums1.end(), res[i]);
        }
    };
};