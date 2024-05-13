#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> f1;
        for (auto x : nums1){
            f1[x]++;
        };
        map<int, int> f2;
        for (auto x : nums2){
            f2[x]++;
        };
        int v1 = 0;
        for (auto x : nums1){
            if (f2[x]>0) {
                v1++;
            };
           
        };

        int v2 = 0;
       
        for (auto x : nums2){
            cout << x << endl;
            if (f1[x]>0) {
                v2++;
            };
            
        };
        
        vector<int> res = { v1, v2 };
        return res;
    }
};