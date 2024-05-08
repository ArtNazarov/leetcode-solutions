class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int sz = nums.size();
        // basic cases
        if (sz==1 && nums[0]==1) return 1;
        if (sz==1 && nums[0]==0) return 0;
        
        int cnt = 0;
        int mx = 0;
        
        int cntOnes = (nums[0] == 1) ? 1 : 0;
       
        for (int i=1;i<sz;i++){
            if (nums[i]==1) cntOnes++;
            if (nums[i]==nums[i-1] && nums[i] == 1){
                cnt ++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        };
        //cout << cntOnes << endl;
        return (cntOnes >= 1) ? mx+1 : 0;
    }
};