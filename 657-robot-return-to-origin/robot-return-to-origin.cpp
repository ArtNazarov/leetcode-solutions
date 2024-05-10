// Simulation
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for (auto ch : moves){
            if (ch=='U'){y+=1;};
            if (ch=='D'){y-=1;};
            if (ch=='L'){x-=1;};
            if (ch=='R'){x+=1;};
        };
        return (x == 0) && (y == 0);
    }
};