#include <sstream>
using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
      stringstream ss(sentence); 
      string w;
      string fw = "";
      string cw = "";
      string pw = "";
       
      int i = 0;
      bool f = true;
      string t = "";

      while (ss >> w){
        
        t = "";
        t += w[0];
        t += w[w.size()-1];
        
        if (i==0) { fw = t; cw = t; } 
        else { pw = cw; cw = t; };
        
         if (i>=1){
            char last = pw[1];
            char beg = cw[0];
            //cout << "p:" << v[p] << endl;
            //cout << pw << " with " << cw << endl;
            //cout << last <<  " and " << beg << endl;
            
            //cout << last << " " << beg << " " << endl;
            f = f && (beg==last);
            if (!f) return false;
        };
        i++;
      };
       
      if (i==1) return cw[0]==cw[1];
         
      return cw[1]==fw[0];
    }
};