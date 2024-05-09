class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int, int> c;
        vector<int> types;
        for (auto v : candyType){
            c[v]++;
            types.push_back(v);
        };
        int n = candyType.size() / 2;
        // cout << "Can eat " << n << endl;
        /*
        for (auto v : c){
            cout << v.first << " " << v.second << endl;
        }; */
        int i = 0;
        int mx = c.size();
        int cnt = 0;
        // cout << n << " items "<<endl;
        set<int> dt;
        int max_count = 0;
        do {
            int dcount = 0;
            for (auto& p : c){
                if (n==0) break;
                dt.insert(p.first);
                if (p.second>0) { 
                    dcount++; 
                    // cout << "eats " << p.first << endl;
                    n--; p.second--;
                    cnt++; } else  { break; };
                
            };
            max_count = max(max_count, dcount);
            if (max_count == dt.size()) return max_count;
            if (n<max_count) return max_count;
        } while (n>0);    
            
        return (dt.size()>1) ? max_count : 1;
    }
};