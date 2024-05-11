class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char, int> d;
        int t;
        int l = releaseTimes[0];
        d[keysPressed[0]] = releaseTimes[0];
        int sz = keysPressed.size();
        for(int i=1;i<sz;i++){
            int x = releaseTimes[i] - releaseTimes[i - 1];
            auto ch = keysPressed[i];
            
            d[ch] = t = max(d[ch], x);
            l = max(l, t);
        
        };
       
        // cout << "L = " << l << endl;
        char ch = ' ';
        for(auto p : d){
            // cout << p.first << " - " << p.second << endl;
            if (p.second == l && p.first > ch) {
                ch = p.first;
            };
        }
       
        return ch;
    }
};