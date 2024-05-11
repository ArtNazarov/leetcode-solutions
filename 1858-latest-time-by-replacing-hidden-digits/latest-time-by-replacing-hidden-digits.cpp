// Using substr
class Solution {
public:
    string maximumTime(string time) {
        string s = "";
        s+=time[0];
       if (time[0]=='?') s = "2";
       if (time[1]=='?') {
        if (s == "2") { s+='3'; } else {s+='9';};
       } else {
        s += time[1];
       };
       if (time[3]=='?') { s+=":5"; } else {s+=":"; s+=time[3];};
       if (time[4]=='?') { s+='9'; } else {s+=time[4];};
        
       int hours = stoi(s.substr(0, 2));
      // cout << hours << endl;
       if (hours >= 24) s[0]='1';
       return s;
    }
};