// using do ... while
class Solution {
public:
    int minimizedStringLength(string s) {
      int i = 0;
      do {
        char ch = s[i];
        //cout << "test " << s[i] << " at " << i << endl;
        int del_I = INT_MIN;
        int del_J = INT_MIN;
        int j = i + 1;
        while (j < s.size()){
            if (s[j]==ch){
                del_I = i;
                del_J = j;
                break;
            };
            j++;
            };
            if (del_I!=INT_MIN){
                //cout << "delete " << s[del_I] << " and " << s[del_J] << endl;
               // s.erase(del_I, 1);
                s.erase(del_J, 1);
                i--;
            };
            //cout << s << endl;
            i++;
        }  while (i<s.size());
      return s.size();
    }
};