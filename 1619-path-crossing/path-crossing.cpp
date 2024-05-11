#include <map>
#include <utility>
using namespace std;
class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, int> c = { {{0,0},1}};
        int x = 0;
        int y = 0;
        int cnt = 0;
        for (auto ch : path){
            switch(ch){
                case 'N': {
                    y -= 1;
                     break;
                }
                case 'S':{
                    y+=1;
                     break;
                }
                case 'W': {
                    x-=1;
                     break;
                }
                case  'E':{
                    x+=1;
                    break;
                };
            };
            //cout << x << " " << y << endl;
            auto p = make_pair(x, y);
            c[p]++;
            
        };
        
        //cout << "--" << endl;
        for (auto xy_p : c){
            //cout << xy_p.first.first << " " << xy_p.first.second << " " << xy_p.second <<  endl;
            if (xy_p.second >= 2) return true;
        };
        return false;
    }
};