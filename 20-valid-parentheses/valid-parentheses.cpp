#include <deque> 
class Solution {
public:
    bool isValid(string s) {
        deque<char> st;
        bool errTop = false;
        for (const auto& ch : s){
            switch(ch) {
                case '(':
                case '{':
                case '[':
                    st.push_front(ch);
                    break;
                case ']':
                case '}':
                case ')':
                    if (st.empty()){
                        errTop = true;
                        break;
                    } else
                    {
                        char onTop = st.front();
                        if ( 
                            ( onTop == '(' && ch == ')' ) ||
                            ( onTop == '{' && ch == '}' ) ||
                            ( onTop == '[' && ch == ']' ) ) {
                                st.pop_front();
                            } else
                            {
                                st.push_front(ch);
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