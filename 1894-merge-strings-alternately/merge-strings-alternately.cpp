#include <queue>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int total = 0;
        string z = "";
        queue<char> s1;
        for (char ch : word1) {
            total+=1;
            s1.push(ch);
            };
        queue<char> s2;
        for (auto ch : word2) {
            total+=1;
            s2.push(ch);
        };
        vector<queue<char>*> s;
        s.push_back(&s1);
        s.push_back(&s2);
        bool i = 0;
        do {
            if (!s[i]->empty()){
                z += s[i]->front();
                s[i]->pop();
                total --;
            };
            i = 1 - i;
            
        } while (total > 0);
        
        return z;
    }
};