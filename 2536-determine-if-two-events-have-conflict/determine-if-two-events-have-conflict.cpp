// using timestamp
#include <utility>
using namespace std;

int getTimestamp(pair<int, int> p){
    int h = p.first;
    int m = p.second;
    return h * 60 + m;
}

pair<int, int> getTime(string& s){
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    auto p = make_pair(h, m);
    return p;
}

class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int ev1Start = getTimestamp(getTime(event1[0]));
        int ev1End = getTimestamp(getTime(event1[1]));
        int ev2Start = getTimestamp(getTime(event2[0]));
        int ev2End = getTimestamp(getTime(event2[1]));
        bool f = ev2End >= ev1Start && ev2Start < ev1End;
        return f || ev1End >= ev2Start && ev1Start < ev2End;
    }
};