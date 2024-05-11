class Solution {
public:
    double average(vector<int>& salary) {
        ranges::sort(salary);
        int mx = salary[salary.size()-1];
        int mn = salary[0];
        if (mx == mn) return mn;
        
        while (salary[0]==mn) { salary.erase(salary.begin());};
        reverse(salary.begin(), salary.end());
        while (salary[0]==mx) { salary.erase(salary.begin());};
        int sz = salary.size();
        double sm = 0;
        for (auto x : salary) sm += x;
        return sm / sz; 
    }
};