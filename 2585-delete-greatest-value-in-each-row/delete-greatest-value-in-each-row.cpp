#include <vector>
using namespace std;
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int s = 0;
        vector<int> should_erase;
        do {
            if (grid.size()==0) break;
            int index = 0;
            should_erase.clear();
          int m = INT_MIN;
          bool changed = false;
             for (auto& v : grid){
                 if (v.size()==0) {

                    should_erase.push_back(index);
                    continue;
                 } else {
                sort(v.begin(),v.end());
                if (v.size()>=1)
                {

                    int value = *(v.end()-1);
                    
                    if (value > m){
                        m = value;
                        changed = true;
                    }
                     v.erase(v.end()-1);
                };
                 };
                index++;

             };

            
             for (auto index : should_erase) grid.erase(grid.begin()+index);
             int szR = grid.size();
              

             if (changed) s+=m;
             if (szR==0) break;
              
             } while (grid.size()>0);


        return s;
    }
};