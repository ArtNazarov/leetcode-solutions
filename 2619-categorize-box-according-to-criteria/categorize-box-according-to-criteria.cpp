// using logical operators
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        const int DIM = 10000;
        const long long VOL = 1000000000LL;
        const int MASS = 100;
        bool tstD = length >= DIM || width  >= DIM || height >= DIM;
        long  long vol = (long)length * (long)width * (long)height;
        bool tstV = vol >= VOL;
        bool isBulky = tstD || tstV;
        bool tstM = mass >= MASS;
        bool isHeavy = tstM;
        if (isBulky && isHeavy)
            return "Both";
        else if (!isBulky && !isHeavy) {
            return "Neither";
        } else if (isBulky && !isHeavy) {
            return "Bulky";
        } else if (isHeavy && !isBulky){
            return "Heavy";
        };
        return "";
    }
};