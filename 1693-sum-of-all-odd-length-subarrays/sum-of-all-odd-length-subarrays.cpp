class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int s = 0;
     int t = 0;
     for (int i=0;i<arr.size();i++){
        int max_cnt = (arr.size() - i + 1) >> 1;
        max_cnt*=2;
        for(int cnt=0;cnt<max_cnt;cnt+=2){
            t = 0;
            vector<int> v = {};
            for (int j=0;j<cnt+1;j++) {
                if (i+j<arr.size()) v.push_back(arr[i+j]);
            };
            if (v.size() % 2 != 0) {
               
                for (auto x : v) {  //cout << " + " << x << "  "; 
                t+=x; };
            };
           // cout << " =  ";
            s+=t;
           // cout << s << endl;
        };

     } ;
     return s;
    }
};