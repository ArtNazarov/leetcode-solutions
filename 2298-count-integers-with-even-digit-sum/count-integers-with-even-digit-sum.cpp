class Solution {
public:
    int countEven(int num) {
         int s  = 0;
         for (int i=2;i<=num;i++)
            {
                int sd = 0;
                int t = i;
                while (t > 0) {sd+=t % 10; t = t >> 1; t/=5;};
                if (sd % 2 == 0) s+=1;
            };
        return s;
    }
};