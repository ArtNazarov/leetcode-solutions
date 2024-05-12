// using max function
class Solution {
public:
    string largestGoodInteger(string num) {
        int mx = INT_MIN;
        int x = 0;
        int j = 0;
        int cnt = 0;
        num.push_back('@');
        for(int i = 0; i<num.size()-1; i++){
            //cout << x << " " << mx << endl; 
            if (num[i]==num[i+1] && cnt<=3) {
                if (cnt>3) {cnt = 1; continue; };
                x = x * 10 + (num[i]-'0');
                j = i + 1;
                cnt++;
                if (cnt == 3) mx = max(mx, x);
               
            } else {
                if (i==j) { x = x * 10 + (num[j]-'0'); cnt++; };
                 
                if (cnt == 3) mx = max(mx, x);
                x = 0;
                cnt = 0;
            };
            
        };
        string z = "000";
        if (mx != 0 ) z = to_string(mx); 
        return (mx == INT_MIN) ?  "" : z;
    }
};