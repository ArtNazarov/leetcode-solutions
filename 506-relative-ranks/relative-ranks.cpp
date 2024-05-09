class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      vector<size_t> ix(score.size());
      iota(ix.begin(), ix.end(), 0);
      ranges::sort(ix.begin(), ix.end(), [&score](int i, int j){return score[i]>score[j];});
     // for (auto i : ix) cout << i << " "; cout << endl;
      vector<string> res(score.size());
      int sz = ix.size();
      for (int i=0;i<sz;i++){
        if (i==0) {res[ix[i]]="Gold Medal";};
        if (i==1) {res[ix[i]]="Silver Medal";};
        if (i==2) {res[ix[i]]="Bronze Medal";};
        if (i>2) {res[ix[i]]=to_string(i+1);};
      };
      return res;
    }
};