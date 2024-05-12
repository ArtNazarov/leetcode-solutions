#include <vector>
using namespace std;

class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int d1 = -1;
        int d2 = -1;
        vector<string> v1;
        int k = startIndex;
        int c1 = 0;
        int c2 = 0;
        for(auto i=0;i<words.size();i++){
           
            if (target == words[k]){
                d1 = c1;
                break;
            };
            k++;
            if (k==words.size()) k = 0;
            c1++;
        };
      
        int j = startIndex;
        for(auto i=0;i<words.size();i++){
           
        
             if (target == words[j]){
                d2 = c2;
                break;
            };
            j--;
            if (-1==j) j = words.size()-1;
            c2++;
        };
         
        return min(d1, d2);
    }
};