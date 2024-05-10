class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     vector<int> x;
     int index = 0;
     for(auto ch : s) {  if (ch == c) x.push_back(index); index++; };
     // for(auto val : x) { cout << val << " ";} cout << endl;
     vector<int> v;
     if (x.size()==0) return v;
     for(int i=0;i<s.size();i++){

         int mn = x[0];
         int mx = x[x.size()-1];
         if (i < mn) {
            v.push_back(abs(i-mn));
         } else if (i > mx) {
           v.push_back(abs(i-mx));
         }
         else {
       
            int ps = INT_MAX;
            int min_diff = INT_MAX;
             for (auto i2=0;i2<x.size();i2++){
                if (abs(x[i2]-i)<min_diff){
                    min_diff = abs(x[i2]-i);
                    ps = x[i2];
                };
             };
             v.push_back(abs(ps-i));
         };
     };
     return v;   
    }
};