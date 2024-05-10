class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        int start = 0;
        int end = 0;
        vector<vector<int>> res;
        for (size_t i=1;i<s.size();i++){
            if (s[i]==s[i-1]) {
                end = i;
            };
            if (i+1==s.size() || s[i]!=s[i-1]){
                int cnt = end - start + 1;
                
                if (cnt >=3 ){
                    vector<int> v = {start, end};
                    res.push_back(v);
                };
            }; 
            if (s[i]!=s[i-1]){
                start = i;
                end = i;
            };
        };
        return res;
    }
};