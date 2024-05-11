class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        unordered_set<string> added;
        for (int i=0;i<words.size()-1;i++){
            for (int j=i+1;j<words.size();j++){
                 
                if (words[j].find(words[i])!=string::npos && added.find(words[i])==added.end() ){
                    res.push_back(words[i]);
                    added.insert(words[i]);
                } else if (words[i].find(words[j])!=string::npos  && added.find(words[j])==added.end()){
                    res.push_back(words[j]);
                    added.insert(words[j]);
                };
            };
        };
        return res;
    }
};