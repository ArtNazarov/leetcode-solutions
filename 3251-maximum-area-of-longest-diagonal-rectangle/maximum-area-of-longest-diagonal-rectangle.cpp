#include <vector>
#include <utility>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        vector<pair<float, float>> v;
        int sz = dimensions.size();
        double max_d = -1.0;
        double max_s = -1;
        for (int i=0;i<sz;i++){
            double d = sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
          
            long s = dimensions[i][0]*dimensions[i][1];
            if (max_d < d) max_d = d;
            v.push_back(make_pair<float, float>(s, d));
             
         };
         /*
         cout << max_d << endl;
         for (auto p : v){
            cout << p.first << " " << p.second << endl;
         }
         */
        float s = 0;
         // int index = 0;
         for (auto p : v){
            // index++;
            // cout << index << ") d =" << p.second << " s=" << p.first << "max_d =" << max_d <<endl;
            float delta =  abs(p.second - max_d);
            // cout << delta << endl;
            if (delta < 0.001) {
                // cout << "found!" << endl;
                s = max(p.first, s);
            }
         }
         return s;
    }
};