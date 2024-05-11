int getPrevSum( vector<int>& v, int i, int k){
    int t = 0;
    int z = k;
    int index = i;
    do {
        index --;
        if (index == -1) index = v.size() - 1;
        t += v[index];
        z--;
    } while (z != 0);
    return t;
}

int getNextSum( vector<int>& v, int i, int k){
    int t = 0;
    int z = k;
    int index = i;
    do {
        index ++;
        if (index == v.size()) index = 0;
        t += v[index];
        z--;
    } while (z != 0);
    return t;
}

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>& v = code;
        vector<int> res(v.size());
        for(size_t i = 0; i < v.size(); i++){
            int t = 0;
            if (k == 0) res[i] = 0;
            if (k < 0) {
               res[i] = getPrevSum(v, i, -k);
            };
            if (k > 0) {
               res[i] = getNextSum(v, i, k);
            };
        };
        return res;
    }
};