// Using vector
class RecentCounter {
public:
    RecentCounter() : v() {
        
    }
    
    int ping(int t) {
        v.push_back(t);
        int min_v = t - 3000;
        int cnt = 0;
        auto lw = lower_bound(v.begin(), v.end(), min_v);
        //if (lw != v.end()) cout << *(lw) << endl;
        cnt = v.end() - lw;
        v.erase(v.begin(), lw);
        return cnt;
    }
    private:
        vector<int> v;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */