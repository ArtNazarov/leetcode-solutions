class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int n = 0;
       int t = 0;
       map<char, int> x;
       for (char ch : name){
         x[ch] = 0;
       };
       for (char ch : typed){
         if (x.find(ch) != x.end()) {
            x[ch]++;
         } else {
            return false;
         }
       }
       const string * nm = &name;
       const string * lt = &typed;
       int nz = name.size();
       int tz = typed.size();
       while (n < nz && t < tz){
            if ((*nm)[n] != (*lt)[t]) return false;
            while (n<nz && t < tz && (*nm)[n]==(*lt)[t]) {  n++; t++;};
            while (t < tz && (*lt)[t] == (*lt)[t-1]) t++;
       };
       /*
       for (auto p : x){
        cout << p.first << " " << p.second << endl;
       } */
        //cout << t << endl;
      
       return (*nm)[nz-1]==(*lt)[tz-1] && t == (*lt).size() && n == (*nm).size();
  
    }
};