class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      vector<int> negs;
        vector<int> ps;

        copy_if(nums.begin(), nums.end(), back_inserter(negs), [](auto e){return e < 0;});
        copy_if(nums.begin(), nums.end(), back_inserter(ps), [](auto e){return e >= 0;});

        sort(negs.begin(), negs.end(), [](auto a, auto b){return a < b;});
        sort(ps.begin(), ps.end(), [](auto a, auto b){return a > b;});

        int szP = ps.size();
        int szN = negs.size();
        
      
        vector<int> ps2;
        vector<int> neg2;
        for (auto i=0;i<szP; i++){
            if (i<=2) ps2.push_back(ps[i]); else break;
        };
        ps.clear();
        if (szN > 0){
        for (int i=0;i<szN;i++){

            if (i<=2) neg2.push_back(negs[i]); else break;
        };
        for (int i=szN-3;i<szN;i++){
            if (i>2) neg2.push_back(negs[i]);  
        };
       
        negs.clear();
        };

        vector<int> v;
        int p = INT_MIN;
        for (auto x : ps2) v.push_back(x); ps2.clear();
        for (auto y : neg2) v.push_back(y); neg2.clear();
        int sz = v.size();
        for (int i = 0; i < sz-2; i++){
            for (int j=i+1;j<sz-1; j++){
                for (int k =j+1;k<sz;k++)
                    p = max(p, v[i]*v[j]*v[k]);
            };
        };
       return p;
    }
};