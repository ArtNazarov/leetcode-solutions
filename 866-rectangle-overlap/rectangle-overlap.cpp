// Solution with struct

struct coord {
    int x1;
    int x2;
    int y1;
    int y2;
};
 

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        coord p1;
        p1.x1 = rec1[0];
        p1.y1 = rec1[1];
        p1.x2 = rec1[2];
        p1.y2 = rec1[3];
        coord p2;
        p2.x1 = rec2[0];
        p2.y1 = rec2[1];
        p2.x2 = rec2[2];
        p2.y2 = rec2[3];
        bool overX = (p1.x1 < p2.x2 && p2.x1 < p1.x2);
        if (!overX) return false;
        bool overY = (p1.y1 < p2.y2 && p2.y1 < p1.y2);
        return overY;
      

    }
};