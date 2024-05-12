// Using struct and timestamp 

struct Dt {
    int m;
    int d;
};

Dt getS(string& s){
    int m = stoi(s.substr(0, 2));
    int d = stoi(s.substr(3, 2));
    // cout << m << ":" << d << endl;
    Dt res;
    res.m = m;
    res.d = d;
    return res;
}

int getTimestamp(Dt d){
 vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int t = 0;
    for(int i=0;i<=d.m-2;i++){
        t += daysInMonth[i];
    };
    t += d.d;
    return t;
}



class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
     
        Dt ds1 = getS(arriveAlice);
        Dt de1 = getS(leaveAlice);
        Dt ds2 = getS(arriveBob);
        Dt de2 = getS(leaveBob);
        /*
        cout << "Alice:" << endl;
        cout << ds1.d << "." << ds1.m << endl;
        cout << de1.d << "." << de1.m << endl;
        cout << "Bob" << endl;
        cout << ds2.d << "." << ds2.m << endl;
        cout << de2.d << "." << de2.m << endl; 
        */
        int ts1 = getTimestamp(ds1);
        int te1 = getTimestamp(de1);
        int ts2 = getTimestamp(ds2);
        int te2 = getTimestamp(de2);
        // cout << ts1 << " " << te1 << endl;
        // cout << ts2 << " " << te2 << endl;
        
        if (te1<ts2) return 0;
        if (te2<ts1) return 0;
        int A = max(ts1, ts2);
        int B = min(te1, te2);
        return abs(B-A)+1;
    }
};