class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       stringstream ss(sentence);
       vector<string> ws;
       string w;
       while (ss >> w) {ws.push_back(w);};
       for (size_t i=0;i<ws.size();i++){
         if (ws[i].find(searchWord)==0) return i + 1;
       };
       return -1;
    }
};