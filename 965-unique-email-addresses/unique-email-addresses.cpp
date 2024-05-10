class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for (auto& e : emails){
            //cout << "Analyze " << e << endl;
            int ps = e.find('@');
            if (ps == string::npos){
                //cout << "No @ in string" << endl;
                continue;
            };
            auto email = e.substr(0, ps);
            //cout << "email is " << email << endl;
            auto domain = e.substr(ps+1, e.size()-1);
            //cout << "domain is " << domain << endl;
            bool isV = true;
            for (auto ch : email){
                isV = isV && ((ch <= 'z' && ch >='a') || (ch=='+') || (ch=='.'));
            };
            if (!isV) { //cout << "email not valid!" << endl;
             continue; };
            isV = true;
            for (auto ch : domain){
                isV = isV && ((ch <= 'z' && ch >='a') || (ch=='.') || (ch=='+'));
            };
            if (!isV)  { 
                //cout << "domain not valid!" << endl;
                 continue; };
            string clear_dot = "";
            for (auto ch : email) if (ch!='.') clear_dot+=ch;
            //cout << "after removing dots " << clear_dot << endl;
            if (clear_dot.find('+')!=string::npos){
                int ps = clear_dot.find('+');
                clear_dot = clear_dot.substr(0, ps);
            };
             if (domain.find('+')!=string::npos){
                int ps = domain.find('+');
                domain = domain.substr(ps, domain.size()-ps);
            };
            // cout << clear_dot << '@' <<domain << endl;
            st.insert(clear_dot+'@'+domain);
        };
        return st.size();   
    }
};