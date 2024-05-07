class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prevRow = {1};
        vector<int> currentRow;
        for (int i = 1; i<=rowIndex+1; i++){
            if (i==1){
                currentRow = prevRow;
            } else {
                currentRow = prevRow;
                currentRow.push_back(1);
                int sz = currentRow.size();
                for (int i=1;i < sz - 1; i++){
                    currentRow[i] = prevRow[i-1] + prevRow[i];
                };
            };
            prevRow = currentRow;
        };
        return currentRow;
    }
};