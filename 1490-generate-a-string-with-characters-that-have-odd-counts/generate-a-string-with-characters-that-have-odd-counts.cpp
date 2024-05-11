// Recursive solution
string gen(int n, char ch){
    string res = "";
    if (n == 0) return res;
    if (n % 2 != 0) {
        string t(n, ch);
        res = t;
        return res;
    };
    int k = n - 1 ;
    string x(k, ch);
    return x + gen(1, ch+1);
}

class Solution {
public:
    string generateTheString(int n) {
       
     return gen(n, 'a');
        
    }
};