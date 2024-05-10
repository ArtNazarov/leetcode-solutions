// Using maps
void getUncommon(map<string, int>& F, map<string, int>& H, 
vector<string>& res){
        for(auto wf : F){
            if (H[wf.first] == 0 && wf.second == 1) res.push_back(wf.first); 
        };
}


void computeF(string &s, map<string, int>& f){
    stringstream ss(s);
    string w;
    while (ss >> w){
        f[w]++;
    };
}

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> f1;
        map<string, int> f2;
        vector<string> res;
        computeF(s1, f1);
        computeF(s2, f2);
        getUncommon(f1, f2, res);
        getUncommon(f2, f1, res);
        sort(res.begin(), res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
            }
};