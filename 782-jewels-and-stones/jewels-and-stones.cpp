// Solution with set
#include <set>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
            set<char> j;
            for (auto ch : jewels){
                j.insert(ch);
            };
            int sum = 0;
            for (auto ch : stones){
                if (j.find(ch)!=j.end()) sum++;
            };
                return sum;  
    }
};