class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> x;
          
        while (k > 0){
            x.push_back( k % 10);
            k = k >> 1;
            k/=5;
        };
        ranges::reverse(x);
        int o = 0;
        int index = 0; 
      
        int d = min(x.size(), num.size());
        int mx = max(x.size(), num.size()+10);
        vector<int> res(mx);
        int to_sum = res.size()-1;
        while (index < res.size()){
        
            int l1 = num.size()-index-1;
            int l2 = x.size()-index-1;
            int d1 = 0;
            if (l1 < num.size() && l1 >=0) d1 = num[l1];
            int d2 = 0;
            if (l2 < x.size() && l2 >=0) d2 = x[l2];
            //cout << d1 << "+" << d2 << endl;
            res[to_sum] = (d1 + d2 + o) % 10;
            o = (d1 + d2 + o) / 10;
            index++;
            to_sum--;
        };
         
        while (res[0]==0) res.erase(res.begin(), res.begin()+1);
        return res;
    }
};