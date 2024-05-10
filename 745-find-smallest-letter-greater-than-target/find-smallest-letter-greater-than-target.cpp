#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto first_char = letters[0];
        ranges::sort(letters);
        auto upper = upper_bound(letters.begin(), letters.end(), target);
        if (upper != letters.end()){
            return *upper;
        };
        return first_char;    
    }
};