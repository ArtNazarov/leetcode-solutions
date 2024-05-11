int countZeroes(const string& s){
    int res = 0;
    for (size_t i=0; i<s.size(); i++){
        if (s[i]=='0') res++;
    };
    return res;
}

int countOnes(const string& s){
    int res = 0;
    for (size_t i=0; i<s.size(); i++){
        if (s[i]=='1') res++;
    };
    return res;
}

void splitByIndex(const string& s, int position, string& left, string& right){
    left = s.substr(0, position + 1);
    right = s.substr(position + 1 , s.size() - position);
}

class Solution {
public:
    int maxScore(string s) {
        int mx = INT_MIN;
        for (int i = 0; i<s.size()-1; i++){
            string left;
            string right;
            splitByIndex(s, i, left, right);
            cout << left << " " << right<< endl;
            int zeroes = countZeroes(left);
            int ones = countOnes(right);
            cout << "zeroes in left" << zeroes << endl;
            cout << "ones in right" << ones << endl;
            int current = zeroes+ones;
            cout << "current =" <<current <<endl;
            mx = max(mx, current);
            cout << "mx = " << mx << endl;
        };
        
        return mx;  
    }
};