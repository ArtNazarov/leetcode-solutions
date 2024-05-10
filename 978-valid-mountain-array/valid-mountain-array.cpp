class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        size_t sz = arr.size();
        if (sz < 3) return false;
        int lt = 0;
        int rt = sz-1;
            int cnt1 = 0;
            int cnt2 = 0;
            while (lt + 1 < sz){
                // descrease or equal breaks asc sequence
                if (arr[lt+1]<arr[lt]) break;
                if (arr[lt+1]==arr[lt]) return false;
                lt++;
                cnt1++;
            }
            while (rt - 1 >= 0){
                // increase or equale breaks desc sequance
                if (arr[rt]>arr[rt-1]) break;
                if (arr[rt]==arr[rt-1]) return false; // as dubles
              rt--;
              cnt2++;
            };
            // cout << cnt1 << " " << cnt2 << endl;
            // cout << lt << " " << rt << endl;
            // both index be eq. if arr valid
            return (rt==lt && !(cnt1 == 0 || cnt2 == 0));
    
        

    }
};