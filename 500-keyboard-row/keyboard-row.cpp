class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<set<char>> v = {
            {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
            {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
            {'z', 'x', 'c', 'v', 'b', 'n', 'm'}
        };
        vector<string> res;
        for (auto w : words){
            for (auto st : v){
                bool flag = true;
                for (auto ch : w) 
                    if (st.find(tolower(ch))==st.end()){
                        flag = false; break; 
                        }
                if (flag) { 
                    res.push_back(w);
                    break; 
                    }
            };
        };
        return res;
    }
};