class Solution {
public:
    bool checkZeroOnes(string s) {
        int prev = s[0]-'0';
        int cnt1 = (prev == 1) ? 1 : 0;
        int cnt0 = (prev == 0) ? 1 : 0;
        
        int mx0 = cnt0;
        int mx1 = cnt1;
        for(size_t i=1;i<s.size();i++){
            int digit = s[i] - '0';
            int prev = s[i-1] - '0';
            if (digit == 0){

                if (prev == 0){
                    cnt0++;
                    
                } else {
                    cnt0 = 1;
                };

                mx0 = max(mx0, cnt0);


            } else if (digit == 1){


                 if (prev == 1){
                    cnt1++;
                    
                } else {
                    cnt1 = 1;
                };
                
                mx1 = max(mx1, cnt1);
                
            };

        };
        //cout << mx0 << " " << mx1 << endl;
        return mx1 > mx0;
    }
};