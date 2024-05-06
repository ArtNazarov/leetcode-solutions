#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
class Solution {
public:
    string addBinary(string a, string b) {
        vector<int> x;
        vector<int> y;
        string z = "";
        for (int i = a.size() - 1; i != -1; i--) {
            int value = int(a[i]) - int('0');
            x.insert(x.end(), value);
            /*  cout << value; */
        };
        // cout << endl;
        for (int i = b.size() - 1; i != -1; i--) {
            int value = int(b[i]) - int('0');
            y.insert(y.end(), value);
            /*  cout << value; */
        };
        // cout << endl;
        vector<int> s;
        size_t i = 0;
        size_t j = 0;
        int shift = 0;
        while (i < x.size() && j < y.size()) {
            int dig = (x[i] + y[i] + shift) % 2;
            shift = (x[i] + y[i] + shift) / 2;
            z.insert(z.begin(), '0'+dig);
            i++;
            j++;
        };
        if ( j < y.size() ) {
            while (j < y.size()) {
            int dig = (y[j] + shift) % 2;
            shift = (y[j] + shift) / 2;
             z.insert(z.begin(), '0'+dig);

            j++;
            };
        } else if ( i < x.size() ) {
            while (i < x.size()) {
            int dig = (x[i] + shift) % 2;
            shift = (x[i] + shift) / 2;
             z.insert(z.begin(), '0'+dig);

            i++;
            }
        };
        if (shift != 0) {
             z.insert(z.begin(), '0'+shift);
        };
         
         
        return z;
    }
};