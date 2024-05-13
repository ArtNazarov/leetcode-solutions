#include <vector>
using namespace std;

int cntSeq(const vector<int>& nums, bool o){
        
        int cnt = 1;
        int max_cnt = 1;
        //vector<vector<int>> seqs;
        //vector<int> v = { nums[0]};
        //seqs.push_back(v);
        for (int i=1;i<nums.size();i++){
           
            bool flag = (o) ? (nums[i] > nums[i-1]) : (nums[i] < nums[i-1]);


            if (flag){
                cnt++;
         
                //seqs[seqs.size()-1].push_back(nums[i]);
            } else {
                
                cnt = 1;
               // vector<int> v = { nums[i] };
               // seqs.push_back(v);
            };
            max_cnt = max(cnt, max_cnt);
        };
        /*
        for (auto v : seqs){
            for (auto x : v) cout << x  << " ";
            cout << endl;
        } */
        return max_cnt;
}

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       
        int max_cnt = cntSeq(nums, false);
        
        int max_cnt2 = cntSeq(nums, true);
        return max(max_cnt, max_cnt2);
        

    }
};