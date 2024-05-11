// Using stack
class Solution {
public:
    int minOperations(vector<string>& logs) {
      stack<string> st;
      for(auto l : logs){
        if (l=="../"){
           if (!st.empty()) st.pop();
           continue;
        };
        if (l=="./") {
             continue;
        };
        st.push(l);
      };
        /*
      vector<string> v;
      while (!st.empty()) {
        v.insert(v.begin(), st.top());
        st.pop();
      };
      
      for(auto z : v){
        cout << z << " ";
      };
      cout << endl;
      return v.size() == 0 ? 0 : v.size();
      */
       return st.size() == 0 ? 0 : st.size();
    }
};