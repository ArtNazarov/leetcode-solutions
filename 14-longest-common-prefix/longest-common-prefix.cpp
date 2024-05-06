#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<int, set<char>> m;
        int minSize = strs[0].size();
        int i = 0;
        for (const auto& s  : strs){
                minSize = min((int)s.size(), minSize);
                int j = 0;
                for(auto ch : s){
                    m[j].insert(ch);
                    j++;
                };    
                i++;   
        };
         
        string prefix = "";
        for (int i=0;i<minSize;i++){
           if (m[i].size()==1) prefix += *(m[i].begin()); else break;
        };
        return prefix;
    }
};