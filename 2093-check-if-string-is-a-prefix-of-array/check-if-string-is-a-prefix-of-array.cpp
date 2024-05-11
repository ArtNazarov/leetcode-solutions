class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        size_t szS = 0;
        for(auto w : words){
            szS = s.size();
            auto f = s.find(w);
            if (string::npos == f)  break;
            //cout << w << " sea. " << s << endl;
            int szW = w.size();
            if (szW!=0 && 0==f){
                s.erase(0, szW);
            };
            szS -= szW;
            if (szS == 0) break;
        };
        return szS == 0;
    }
};