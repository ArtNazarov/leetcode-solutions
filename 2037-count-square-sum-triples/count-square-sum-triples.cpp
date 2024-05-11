// exclude one cycle
class Solution {
public:
    int countTriples(int n) {
      int cnt = 0;
      for (int a=1;a<=n-1;a++){
        for(int b=a+1;b<=n; b++){
            int x = (int) sqrt(a*a+b*b);
            if (x*x == a*a+b*b){
                if (x >= 1 && x <= n) cnt+=2;
            };
        };
      };
      return cnt;   
    }
};