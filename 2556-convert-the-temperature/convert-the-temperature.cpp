#include <vector>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> res = {
            celsius + 273.15,
            celsius * 1.80 + 32.00
        };
        return res;
    }
};