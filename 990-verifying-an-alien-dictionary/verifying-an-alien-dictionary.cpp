void getO(string& order, map<char, int>& x){
    size_t sz = order.size();
    for(int i=0;i<sz;i++){
        x[order[i]] = i;
    };
}

void recode(string& s, map<char, int>& x, string& res){
    res = "";
    for (auto ch : s){
        char ch2 = x[ch] + 'a';
        res += ch2;
    };
}




class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> x;
        
        getO(order, x);
        /*
        for (auto p : x){
            cout << p.first << " - " << p.second << endl;
        };
        */
        string a = "";
        string b = "";
        int j = words.size()-1;
        for (auto i=0; i<words.size()-1;i++){
           
                bool doSwap = false;
                recode(words[i], x, a);
                recode(words[i+1], x, b);
                // cout << a << " " << b << endl;
                doSwap = a > b;
            if (doSwap){
                return false;
                };

             if (j-1>=0){
                    recode(words[j-1], x, a);
                    recode(words[j], x, b);
                    doSwap = a > b;
                    if (doSwap) return false;
             };
               j--; 
                if (j<i) break;
            }
        
        return true; 
    }
};