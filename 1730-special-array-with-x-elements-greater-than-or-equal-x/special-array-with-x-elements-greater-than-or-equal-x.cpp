class Solution {
public:
    int specialArray(vector<int>& nums) {
      ranges::sort(nums);
      int mx = nums[nums.size()-1];
      map<int, int> f;
      for(auto x : nums) f[x]++;
      for(int x=1;x<=mx;x++){
           
                int cnt = 0;
                for (auto p : f){
                    if (p.first >= x) cnt += p.second;
                };
                //cout << cnt << endl;
                if (cnt == x) return x;
            
      };
      return -1;
    }
};