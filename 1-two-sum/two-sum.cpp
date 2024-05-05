class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
      int size = nums.size();
      map<int, int> m;
      pair<int, int> result = {0, 0};
      for (int i=0;i<size;i++){
            int x = target - nums[i];
            if (m.find(x)!=m.end()){
                    result.first = i;
                    result.second = m[x];
                    break;
            };
             m[nums[i]] = i;
          };
      vector<int> r = { result.first, result.second };
      return r;
    }

};