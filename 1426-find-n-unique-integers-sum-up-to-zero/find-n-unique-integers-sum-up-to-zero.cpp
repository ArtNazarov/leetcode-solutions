 

class Solution {
public:
    vector<int> sumZero(int n) {
        
        if (n==0) {vector<int> x; x.push_back(0); return x;};
        vector<int> v(n);
        int mid = n >> 1;
        int l =  mid;
        int r = mid + 1;
        int cnt = 0;
       // cout << mid << endl;
       // cout << l << " " << r << endl;
        if (n%2!=0){
        while (cnt <= n){
            if (l==mid) v[l] == 0; else if (l>=0) v[l] = v[l+1]+1;             
            if (r==mid+1) v[r] == -n; else if (r<n) v[r]=v[r-1]-1;
        
            //cout << l << " " << r << endl;
            l--;
            r++;
            cnt+=2;
        };
         if (mid+1<n && n % 2 !=0 ) v[mid+1]=-v[0];
        } else {
            l--;
            r--;
            int q = 1;
            while (l>=0){
                v[l] = q;
                if (r<n) v[r] = -q;
                l--;
                r++;
                q++;
            };
        } /*
        for (auto x : v){
            cout << x << " " << endl;
        }; */
       
         //if (mid+1<n && n % 2 ==0 ) {cout << v[mid] << " " << v[mid+1]<<endl; v[mid+1]=-v[mid];};
        return v;
    }
};