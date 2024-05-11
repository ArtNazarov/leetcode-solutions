using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int v = -1;
        int sz = arr.size()-1;
        for(auto i=sz; i>=0;i--){
            int mx = max(v, arr[i]);
            arr[i] = v;
            // cout << "v =" << v << " ";
            v = mx;
            // cout << "mx =" << mx << " |";for (auto x : arr) { cout << x << " ";}; cout << endl;
        };
        return arr;
    }
};