class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      ranges::sort(arr);
      int mn = 1;
      int mx = arr[arr.size()-1];
      int cnt = 0;
      for (int v=mn;v<=mx;v++){
        bool isFind = binary_search(arr.begin(), arr.end(), v);
        if (!isFind) cnt++;
        if (k == cnt) return v;
      };
      return mx+(k-cnt);
    }
};