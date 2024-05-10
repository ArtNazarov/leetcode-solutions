using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.compare(goal) == 0) return true;
        size_t sz = s.size();
        for (size_t i=1; i<sz; i++){
            string x = s;
            for (size_t j=0; j<sz; j++){
            int index = (j+i)%sz;
            x[index] = s[j];
            };
            //cout << x << endl;
            if (x == goal) return true;
        };
        return false;  
    }
};