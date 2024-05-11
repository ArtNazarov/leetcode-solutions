// Using stack
class Solution {
public:
    int maxDepth(string s) {
      stack<char> st;
      int dep = 0;
      int max_dep = 0;
      for(auto ch : s){
     
        if (st.size()!=0){
        //cout << ch << endl;
        //cout << dep << endl;
        //    cout << "T:"<< st.top() << endl;
            if (st.top()=='(' && ch==')'){
                st.pop();
                dep--;
            } else if (ch=='(' || ch == 
            ')') {
                st.push(ch);
                dep++;
            }
        } else if (ch=='(' || ch == ')') {
                dep = 1;
                st.push(ch);
        };
        max_dep = max(dep, max_dep);
      } ;
      return max_dep;
    }
};