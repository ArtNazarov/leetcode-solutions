// Solution with double precision

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
         
          int sz = coordinates.size();
        float x0 = (float) coordinates[0][0];
        float y0 = (float) coordinates[0][1];
        float x1 = -1;
        int index = -1;
        for (int i=0; i<sz;i++){
              x1 = (float) coordinates[i][0];
             if (x1 - x0 !=0) {
                 index = i;
                 break;
            };
        };

        if (index == -1){
            return true;
        }


        float y1 = (float) coordinates[index][1];

        float k = (y1-y0) / (x1-x0);
         
        float b = y0 - k * x0;
        for (int i=1; i<sz;i++){

            float y = (float) coordinates[i][1];
            float x = (float) coordinates[i][0];

            if ( i != index && abs(k*x+b - y)>=0.0001)  {

                return false;
            };
        };
        return true;
    }
};