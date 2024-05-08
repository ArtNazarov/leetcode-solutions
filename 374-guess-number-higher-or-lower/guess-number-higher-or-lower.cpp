/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
         
        int lt = 1;
        int rt = n;
        int x = 0;
        int r = 0;
        int initial = (int) ceil(0.3 * (rand() % n));
        int first_run = false;
        while (true) {
            if (first_run) {
                x = lt + initial;
                first_run = false;
            } else {
                x = lt + (rt-lt)/2;
            };
            r = guess(x);
            if (r == 0) return x;
            if (r == 1) {  lt = x + 1;} else {  rt = x - 1;}; 

        };
        return 0;
    }
};