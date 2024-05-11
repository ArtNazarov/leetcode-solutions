#include <map>
#include <string>
using namespace std;
class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<string, string> decode;
        int in_code = 1;
        for(auto ch='a';ch<='z';ch++){
              string value = "";
              value+=ch;
              string key = to_string(in_code);
              if (ch >='j' and ch <='z') key += '#';
              decode[key] = value;
              in_code++;
        };
        /*
        for (auto p : decode){
            cout << p.first << " maps to " << p.second << endl;
        } */
        //cout << s << endl;
        string res = "";
        int index = 0;
        //int temp = 0;
        while (s.size()>0){
           // temp ++;
           // if (temp > 10) break;
           // cout << s << " with index" << index << endl;
           string buf = "";
           string prefix1 = "";
           string prefix2 = "";
            if (s.size()>=3) {
                prefix2 = s.substr(0, 3);
            };
            if (s.size() >=1){
                prefix1 = s.substr(0, 1);
            };
            //cout << prefix1 << " , " << prefix2 << endl;
            if (prefix2!="" && decode.find(prefix2)!=decode.end()){
                res += decode[prefix2];
                s.erase(0, 3);
            } else if (prefix1 != "" && decode.find(prefix1)!=decode.end()){
                res += decode[prefix1];
                s.erase(0, 1);
            };
            //cout << res << endl;
        }
    return res; 
    }
};