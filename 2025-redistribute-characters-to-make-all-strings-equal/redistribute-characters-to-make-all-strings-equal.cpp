class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if (words.size()==1) return true;
        // cout << words.size() << endl;
        unordered_map<char, int> f;
        for(auto w : words){
            for(auto ch : w){
                f[ch]++;
            };
        };
        int x = (*f.begin()).second;
         if (f.size()==1 && (x==1)) return true;
         
        set<int> st;
        for(auto& p : f) {
            p.second = p.second % words.size();
            //cout << p.second << endl;
            if (p.second != 0) return false;
            st.insert(p.second);
            if (st.size()!=1) return false;
            
        }
       
        return true;
    }
};