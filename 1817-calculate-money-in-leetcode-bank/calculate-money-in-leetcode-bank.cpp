// Using variables for storing previous values
class Solution {
public:
    int totalMoney(int n) {
        int prevDay = 0;
        int prevMonday = 0;
        int curDay = 0;
        int s = 0;
        int prevMondayIndex = 0;
        for(int index = 1;index <= n;index ++){
            if (index == 1){
                curDay = 1;
                prevDay = 1;
                prevMonday = 1;
                prevMondayIndex = 1;
            } else
            if (index - prevMondayIndex < 7) {
                curDay = prevDay + 1;
            } else {
                curDay = prevMonday + 1;
                prevMonday = curDay;
                prevMondayIndex = index;
            };
            s += curDay;
            prevDay = curDay;
        };
        return s;
    }
};