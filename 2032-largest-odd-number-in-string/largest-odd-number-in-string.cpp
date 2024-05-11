class Solution {
public:
    string largestOddNumber(string num) {
            unordered_set<char> st = {'1', '3', '5', '7', '9'};
            int sz = num.size();
            int rightPosition = -1;
            for (int ps = sz -1; ps >=0; ps--){

                    if (st.find(num[ps]) != st.end()){

                            rightPosition = ps;
                            break;
                    };
            };
            if (rightPosition == -1) return "";
            return num.substr(0, rightPosition+1);
    }
};