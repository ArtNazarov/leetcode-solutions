 

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        const unsigned short int CNT = 101;
        vector<int> c(CNT);
        int cntZ = 0;
        for(auto x : nums){
            if (x!=0) c[x]++; else cntZ++;
        };
        int last = 0;
        for(auto& x : c){
            x += last;
            last = x;
        };
        /*
        for(auto x : c){
            cout << x << " ";
        };
        cout << endl;
        */
        for(auto& x : nums){
            if (x!=0) x = c[x-1] + cntZ; else x = 0;
        };
        return nums;
    }
};