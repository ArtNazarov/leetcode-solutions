double heronSquare(double a, double b, double c){
    double s = ( a + b + c) / 2;
    return sqrt(s * (s-a) * (s-b) * (s - c));
}

double getLen(vector<int>& p1, vector<int>& p2){
    double x1 = p1[0];
    double x2 = p2[0];
    double y1 = p1[1];
    double y2 = p2[1];
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx*dx + dy*dy);
}

double getS(vector<int>& p1, vector<int>& p2, vector<int>& p3){
    double a = getLen(p1, p2);
    double b = getLen(p1, p3);
    double c = getLen(p2, p3);
    return heronSquare(a, b, c);
}


class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
    
        double mx = -1.0;
        int sz = points.size();
        for (int i=0;i<sz-2; i++){
           for(int j=i+1;j<sz-1;j++){
            for(int k=j+1;k<sz;k++){
                  double s = getS(points[i], points[j], points[k]);
                  //cout << i << " " << j << " " << k << " | S = " << s << endl;
                  mx = max(mx, s);
            };
           }
        };
        return mx;
    }
};