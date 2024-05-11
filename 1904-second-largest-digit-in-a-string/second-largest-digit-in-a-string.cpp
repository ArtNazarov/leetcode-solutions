// Using deque
void print_deq(const deque<int>& d){
    cout << "Deq: ";
    for (auto v : d){
        cout << v << " ";
    };
    cout << endl;
}

class Solution {
public:
    int secondHighest(string s) {
        deque<int> d;
        for (auto ch : s){
            if (!isdigit(ch)) continue;
            int digit = ch - '0';
            if (d.empty()) {
               // cout << " first value " << digit << endl;
                d.push_front(digit);
               // print_deq(d);
            } else {
                if (d.front()<digit){
                    //cout << digit << " greater than top " << d.front() << endl;
                    d.push_front(digit);
                    //print_deq(d);
                } else if (d.front()>digit) {
                    //cout << digit << " less than top " << d.front() << endl;
                    int x = d.front();
                    int y = INT_MIN;
                    if (d.size()>=2){
                        d.pop_front();
                        y = d.front();
                    }
                    d.clear();
                    d.push_front(max(digit, y));
                    d.push_front(x);
                    
                    //print_deq(d);
                };
            };

        };
        if (d.size()<2) return -1;
        d.pop_front();
        return d.front();
    }
};