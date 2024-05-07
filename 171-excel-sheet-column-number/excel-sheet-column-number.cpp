class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int s = 0;
        while (columnTitle.size()>0){
            int d = columnTitle[0] - 'A' + 1;
            //cout << d << endl;
            s = s << 1;
            s *= 13;
            s += d;
            //cout << s << endl;
            columnTitle.erase(0, 1);
        };
        return s;
    }
};