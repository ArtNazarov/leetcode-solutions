#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        int index = 0;
        for (auto w : words){
            if (w.find(x) != string::npos) res.push_back(index);
            index++;
        };
        return res;
    }
};