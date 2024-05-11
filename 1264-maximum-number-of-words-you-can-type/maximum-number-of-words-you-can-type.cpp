class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> st;
        for(auto x : brokenLetters){
            st.insert(x);
        };
        unordered_map<string, int> m;
        int cnt = 0;
        stringstream ss(text);
        string w;
        while (ss >> w){
            if (m[w]==0){
                bool test = true;
                for(auto ch : w){
                    if (st.find(ch)!=st.end()) {
                        m[w] = -1;
                        test = false;
                        break;
                    };
                };
                if (test) m[w] = +1;
            };
            if ( m[w]==+1 ) { cnt++; };
        };
        return cnt;
    }
};