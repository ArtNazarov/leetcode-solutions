class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        const int BITS = 8 * sizeof(int);
        auto fn = [&arr](auto a, auto b){
            bitset<BITS> bs1(a);
            bitset<BITS> bs2(b);
            bool f = bs1.count() < bs2.count();
            if (f) return f;
            f = bs1.count() == bs2.count();
            if (f) return a < b;
            return false;
        };
        sort(arr.begin(), arr.end(), fn);
        return arr;
    }
};