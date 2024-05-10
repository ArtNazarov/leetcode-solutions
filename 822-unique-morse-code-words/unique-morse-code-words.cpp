#include <set>
#include <vector>
#include <map>
#include <string>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> st;
        vector<string> values = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<char, string> morse;
        int index = 0;
        for (char key='a'; key<='z'; key++){
            morse[key] =values[index];
            index++;
        };
        for (auto w : words){
            string s = "";
            for (auto ch : w){
                s+=morse[ch];
            };
            st.insert(s);
        };
        return st.size();  
    }
};