class Solution {
public:
    int fib(int n) {
       // iteration method 
       int first = 0;
       int second = 1;
       if (n==0) return first;
       if (n==1 || n==2) return second;
       while (n > 0){
           int sum = first + second;
           first = second;
           second = sum;
           n--;
       };
       return first;
    }
};