// using function-in-function

bool isValidTimes(string& s){
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    return (h<24 && m<=59);
}


void countMinsS(string s, int& cnt){
     if (s[4]=='?'){
            for (auto m=0;m<=9;m++){
                s[4] = m + '0';      
                if (isValidTimes(s)) cnt++;
            };
     } else {
        if (isValidTimes(s)) cnt++;
     };
};

void countMinsF(string s, int& cnt){
     if (s[3]=='?'){
            for (auto m=0;m<=5;m++){
                s[3] = m + '0';      
                countMinsS(s, cnt);
            };
     } else {
        countMinsS(s, cnt);
     };
};

void countHoursS(string s, int& cnt){
     if (s[1]=='?'){
            for (auto h=0;h<=9;h++){
                s[1] = h + '0';      
                countMinsF(s, cnt);
            };
     } else {
        countMinsF(s, cnt);
     };
};

void countHoursF(string s, int& cnt){
     if (s[0]=='?'){
            for (auto h=0;h<=2;h++){
                s[0] = h + '0';      
                countHoursS(s, cnt);
            };
     } else {
        countHoursS(s, cnt);
     };
};




class Solution {
public:
    int countTime(string time) {
        int cnt = 0;
        countHoursF(time, cnt);
        return cnt;
       
        
    }
};