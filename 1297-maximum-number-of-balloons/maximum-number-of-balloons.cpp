class Solution {
public:
    int maxNumberOfBalloons(string text) {
      string p = "balloon";
      map<char, int> f;
      unordered_set<char> st;
      for (auto ch : p){
        f[ch]++;
        st.insert(ch);
      };
      map<char, int> f2;
    for (auto ch : text){
        f2[ch]++;
    };
    int res = INT_MAX;
    int cnt = 0;
    for (auto p : f){
        auto ch = p.first;
        auto fc = f2[ch];
        if (fc!=0) {
            res = min(res, fc / p.second);
            if (res == 0) break;
            st.erase(ch);
        };
    };
    //for (auto ch : st) cout <<  ch << endl;
    //cout << cnt << endl;
    //cout << p.size() << endl;
    return (st.empty()) ? res : 0;
    }
};