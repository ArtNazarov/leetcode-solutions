bool isG(string& s1, string& s2){
    int sz = max(s1.size(), s2.size());
    if (s1.size()<sz){
        while (s1.size()!=sz) s1 = "0" + s1;
    };
    if (s2.size()<sz){
        while (s2.size()!=sz) s2 = "0" + s2;
    };

  //  cout << "comp" << s1 << " " << s2 << endl;
    /*
    int cnt = 0;
    for(auto i=0;i<sz;i++){
        if (s1[i]<s2[i]) return false;
        if (s1[i]==s2[i]) cnt++;
        if (s1[i]>s2[i]) return true;
         
    };
    */
    return s1 > s2; // (cnt != sz);
}

class Solution {
public:
    string removeDigit(string number, char digit) {
        string longest = "0";
        for(size_t i=0;i<number.size();i++){
           
            if (number[i]==digit){
            string t = number;
           
              t.erase(i, 1);
              // cout << t <<  " with ";
            //cout << longest << endl;
          
            
            if (isG(t, longest)) { 
                // cout << "!" << endl; 
                longest = t; 
             //cout << "L: "<< longest << endl;
              };
        };
        };
        return longest;
    }
};