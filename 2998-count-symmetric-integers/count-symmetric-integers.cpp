class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    int count = 0;
    for (auto x = low; x<=high;x++){
        int t = x;
        int digits = 0;
        // count digits
        while (t > 0){
            t/=10;
            digits++;
        };

        // only even digits
        if (digits % 2 == 0) {
            // cout << "digits " <<digits << "for  " << endl;
                t = x;
                // cout << t << endl;
                int sumL = 0;
                int sumR = 0;
                int digit = 0;
                int med = digits >> 1;
                // cout << "med digit" << med << endl;
                while (t > 0){
                    if (digit<med) { sumR+=t%10;} else {sumL+=t%10;};
                    digit++;
                    t/=10;
                };
                // cout << "l:" << sumL << " r:" << sumR << endl;
                if (sumR == sumL) count ++;
        };
    };
        return count ;    
    }
};