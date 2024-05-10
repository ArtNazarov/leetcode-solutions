class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        size_t p = start;
        int d1 = 0;
        size_t sz = distance.size();
        while (p!=destination){
            d1 += distance[p];
            p = (p + 1) % sz;
        };
        //cout << d1 << endl;
        int d2 = 0;
        p = destination;
        while (p!=start){
            //cout << p << endl;
            d2 += distance[p];
            p = (p + 1) % sz;
        };
        //  cout << p << endl;
        // cout << d2 << endl;
        return min(d2, d1);

    }
};