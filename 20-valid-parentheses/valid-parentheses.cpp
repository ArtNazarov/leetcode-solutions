#include <stack>
class Solution {
public:
    bool isValid(string s) {
        char onTop = ' '; 
        stack<char> st;
        bool errTop = false;
        for (const auto& ch : s){
            switch(ch) {
                case '(':
                case '{':
                case '[':
                    st.push(ch);
                    break;
                case ']':
                case '}':
                case ')':
                    if (st.empty()){
                        errTop = true;
                        break;
                    } else
                    {
                       onTop = st.top();
                        if ( 
                            ( onTop == '(' && ch == ')' ) ||
                            ( onTop == '{' && ch == '}' ) ||
                            ( onTop == '[' && ch == ']' ) ) {
                                st.pop();
                            } else
                            {
                                st.push(ch);
                            };
                    };
            };
            if (errTop) {
                break;
            };
        };


        return ( st.empty() && !errTop );
    }
};