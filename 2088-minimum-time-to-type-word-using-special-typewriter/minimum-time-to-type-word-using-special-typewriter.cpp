class Solution {
public:
    int minTimeToType(string word) {
       int t = 0;
       auto p = 'a';
       for(auto ch : word){    
            // cout << t << endl;
            int d = abs(ch-p);
            int d2 = abs(26-d);
            // cout << d << " " << d2 << endl;
            int dist =  min(d, d2);
            // cout << "distance " << p << " " << ch << " " << dist << endl;
            t+= dist;
            t+=1;
            // cout << "sum: " << t << endl;
            p = ch;
       };
       return t;
    }
};