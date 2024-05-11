// O(n) solution
class Solution {
public:
    string interpret(string command) {
     string res = "";
     string cmd = "";
     for (auto ch : command){
        cmd += ch;
        if (cmd == "G") {
            res += "G";
            cmd = "";
        } else if (cmd == "()")         {
            res += "o";
            cmd = "";
        } else if (cmd=="(al)"){
            res += "al";
            cmd = "";
        };
     } 
     return res;  
    }
};