int d(int x1, int y1, int x2, int y2){
    if (x1 > x2) swap(x1, x2);
    int deltaX = 0;
    deltaX = x2;
    deltaX -= x1;
    if (y1 > y2) swap(y1, y2);
    int deltaY = 0;
    deltaY = y2 - y1;
    return min(deltaX, deltaY) + abs(deltaX - deltaY);
}

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int dist = 0;
        for (int i=1; i<points.size();i++){
            int x1 = points[i-1][0];
            int y1 = points[i-1][1];
            int x2 = points[i][0];
            int y2 = points[i][1];
            dist += d(x1, y1, x2, y2);
        };
        return dist;
    }
};