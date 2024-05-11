// Computing rest
class Solution {
public:
    int sumBase(int n, int k) {
        int s = 0;
        while (n>0){
            int digit = n % k;
            s+=digit;
            n/=k;
        };
        return s;
    }
};