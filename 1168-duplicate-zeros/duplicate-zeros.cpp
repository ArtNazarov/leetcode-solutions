// Using iterators in insert and erase
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int sz = arr.size();
        while (i<arr.size()) if (arr[i] == 0) {
            arr.insert(arr.begin()+i, 0);
            i+=2;
        } else {
            i+=1;
        };
        arr.erase(arr.begin()+sz, arr.end());
    }
};