#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
class Solution {
public:
    string addBinary(string a, string b) {
 
        string z = "";
         
        // cout << endl;
        vector<int> s;
        size_t i = 0;
        size_t j = 0;
        int shift = 0;
        while (i < a.size() && j < b.size()) {
            int ni = a.size()-i-1;
            int nj = b.size()-j-1;
            int x = a[ni] - '0';
            int y = b[nj] - '0';
            int s = x + y + shift;
            int dig = s % 2;
            shift = s >> 1;
            z.insert(z.end(), '0'+dig);
            i++;
            j++;
        };
        if ( j < b.size() ) {
            while (j < b.size()) {
                int nj = b.size()-j-1;
                int y = b[nj] - '0';
                int s = y + shift;
                int dig = s % 2;
                shift = s >> 1;
                z.insert(z.end(), '0'+dig);

            j++;
            };
        } else if ( i < a.size() ) {
            while (i < a.size()) {
                int ni = a.size() - i - 1;
                int x = a[ni] - '0';
                int s = x + shift;
                int dig = s % 2;
                shift =  s >> 1;
             z.insert(z.end(), '0'+dig);

            i++;
            }
        };
        if (shift != 0) {
             z.insert(z.end(), '0'+shift);
        };
         ranges::reverse(z);
         
        return z;
    }
};