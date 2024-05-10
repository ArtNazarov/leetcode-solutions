bool isTria(double a, double b, double c){
    return ((a+c) > b && (b + c) > a && (a + b) > c);
}
// Using Heron's formula 
double getS(double a, double b, double c){
    double p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

double len(vector<int> p1, vector<int> p2){
    double dx = p1[0] - p2[0];
    double dy = p1[1] - p2[1];
    return sqrt(dx*dx + dy*dy);
}

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
       for (int i=0; i<points.size()-2;i++){
         double a = len(points[i], points[i+1]);
         double b = len(points[i], points[i+2]);
         double c = len(points[i+1], points[i+2]);
         //cout << a << " " << b << " " << c << endl;
         //cout << getS(a, b, c) << endl;
         if (!isTria(a, b, c) || getS(a, b, c)<0.0001) return false;
       };
        return true;
    }
};