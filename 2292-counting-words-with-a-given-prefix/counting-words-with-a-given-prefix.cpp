class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
            int s = 0;
            size_t sz = pref.size();
            for (auto w : words){
                if (w.size() < sz) continue;
                if (pref.compare( w.substr(0, sz)) == 0) s++;
            };
            return s;    
    }
};