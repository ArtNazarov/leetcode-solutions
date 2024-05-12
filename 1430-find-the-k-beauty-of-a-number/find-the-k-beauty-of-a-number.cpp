// using stoi
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string z = to_string(k);
        int l1 = z.size();
        string h = to_string(num);
        int l2 = h.size();
        if (l2 < k){
            while (h.size()!=l1){ h = "0"+h;};
        };
        // cout << h << endl;
        int cnt = 0;
        for(int i=0;i<h.size()-l1+1;i++){
            
           
            string tmp = h.substr(i, k);
            int n = stoi(tmp);
           
            if (n!=0 && tmp.size()==k) {
                // cout << n << endl;
                if (num % n == 0) cnt++;
            };
        };
        return cnt;
    }
};