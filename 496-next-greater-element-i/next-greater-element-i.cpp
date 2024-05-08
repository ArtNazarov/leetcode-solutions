class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res = nums1;
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        for (int i=0;i<sz1;i++){
           
            bool eqFind = false;
            bool findGreatest = false;
            int x;
            for (int j=0;j<sz2;j++){
                if (!eqFind && nums2[j] == nums1[i]){
                    eqFind = true;
                };
                if (eqFind && nums2[j]>nums1[i]){
                    x = nums2[j];
                    findGreatest = true;
                    break;
                };
            };
            res[i] = (findGreatest) ? x : -1;
        };
        return res;
    }
};