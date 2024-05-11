#include <vector>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
     int i = 0;
     int w1 = 0;
     int j = 0;
     int w2 = 0;
     do {
        // cout << "compare " << word1[w1][i] << " and " << word2[w2][j] << endl;
        if (word1[w1][i]!=word2[w2][j]) return false;

        i++;
        if (i==word1[w1].size()) {
            i = 0;
            w1++;
        };
        j++;
        if (j==word2[w2].size()) {
            j = 0;
            w2++;
        };
     } while (w1 < word1.size()&&w2 < word2.size());
     //cout << w1 << " " << word1.size() << endl;
     //cout << w2 << " " << word2.size() << endl;
     
     return w1 == word1.size() && (w2==word2.size()
     && i == 0 && j == 0);   
    }
};