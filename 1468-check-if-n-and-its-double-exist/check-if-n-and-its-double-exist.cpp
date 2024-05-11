// Using nested for
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int sz = arr.size();
        for (int i = 0; i <= sz - 2 ; i++){
            for (int j = i + 1; j <= sz-1; j++){
                if (arr[i] == 2 * arr[j] || 2 * arr[i] == arr[j]) return true;
            };
        };
        return false;
    }
};