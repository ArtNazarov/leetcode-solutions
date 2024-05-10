class Solution {
public:
    string removeDuplicates(string s) {
      
      size_t i = 1;
      size_t sz = s.size();
            while (i-1<sz) {
                if (s[i-1]==s[i]){
                //cout << "equal at " << i - 1 << " and " << i << endl;
                s.erase(i-1, 2);
                i--; if (i==0) i = 1;
                //cout << i-1 << ") " << s << endl;
                continue;
                } else {
                //cout << " just increase " << i << endl;     
                i++;
                };
            };
      
        return s; 
       
    }
};