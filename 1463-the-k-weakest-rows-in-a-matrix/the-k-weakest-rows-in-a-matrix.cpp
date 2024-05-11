class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      map<int, int> f;
      int index = 0;
      for(auto v : mat){
        f[index] = 0;
        for(auto x : v){
            if (x == 1) f[index]++;
        };
        index ++ ;
      };
      vector<pair<int, int>> fx(mat.size());
      
      for (auto p : f){
        // cout << p.first << " " << p.second << endl;
        fx[p.first] = p;
        
      };
      ranges::sort(fx.begin(), fx.end(), [](auto a, auto b){
        if (a.second < b.second) return true;
        if (a.second == b.second) return a.first < b.first;
        return false;
      });
      vector<int> res;
      for(size_t i=0;i<k;i++) res.push_back(fx[i].first);   
      return res;
    }
};