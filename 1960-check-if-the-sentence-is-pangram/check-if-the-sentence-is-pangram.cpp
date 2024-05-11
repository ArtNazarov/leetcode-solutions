class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> f;
        
        for(auto ch : sentence){
            char x = tolower(ch);
            f[x]++;
        };
        int cnt = 0;
        for (char ch='a';ch<='z';ch++){
            if (f[ch]>=1) cnt++;
        };
        return (cnt == 26); 
    }
};