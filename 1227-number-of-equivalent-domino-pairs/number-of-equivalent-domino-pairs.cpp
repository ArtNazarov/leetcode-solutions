#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int pairs = 0; 
       // map<pair<int, int>, vector<vector<int>>> ps;
        map<pair<int, int>, int> m;
        size_t sz = dominoes.size();
        for (int i=0; i<sz; i++){
                int a = dominoes[i][0];
                int b = dominoes[i][1];
                if (b > a) swap(a, b);
                auto p = make_pair(a, b); 
                if (m.find(p)==m.end()) 
                   { m[p] = 0; 
                   //ps[p].push_back({a, b}); 
                   } else {
                        m[p]++;
                        pairs+=m[p];
                       // ps[p].push_back({a, b});
                 }; 
        };
        /*
        bool debug = false;
        if (debug){
        
        for (auto hv : ps){
            cout << hv.first.first << " / " << hv.first.second << " with ";
            for (auto d : hv.second){
                cout << "(" << d[0] << " " << d[1] << ") ";
            };
            cout << " - " << m[hv.first];
            cout << endl;
        };
        }; */
        return pairs;   
    }
};