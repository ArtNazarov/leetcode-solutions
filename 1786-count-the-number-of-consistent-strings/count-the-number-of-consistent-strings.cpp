class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for (auto ch : allowed){
            st.insert(ch);
        };
        int cnt = 0;
        for (auto w : words){
            bool doCount = true;
            for (auto ch :  w){
                if (st.find(ch)==st.end()){
                    doCount = false;
                    break;
                };
            };
            if (doCount) cnt++;
        };
        return cnt;
    }
};