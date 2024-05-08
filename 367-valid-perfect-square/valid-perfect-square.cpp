
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        bool isP = false;
        while (true){
            long m = (long)i*(long)i;

            if (m==(long)num) isP = true;
            if (isP || m>(long)num) break;
            
            i++;
        };
        return isP;
    }
};