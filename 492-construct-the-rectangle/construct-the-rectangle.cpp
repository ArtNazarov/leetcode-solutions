class Solution {
public:
    vector<int> constructRectangle(int area) {
     int index;
     vector<pair<int, int>> d;
     d.push_back(make_pair(area, 1));
     index = 2;
     while (index * index <= area){
        if (area % index == 0) {
            
            int other = area / index;
            if (other >= index) d.push_back(make_pair(other, index));
            if (other < index) break;
        };
        index++;
     };
     int diff = INT_MAX;
     int min_diff = INT_MAX;
     int best_L = INT_MAX;
     int best_W = INT_MAX;
     for (auto p : d){
        int L = p.first;
        int W = p.second;
        
            diff = abs(L - W);
            if (diff < min_diff){
                diff = min_diff;
                best_L = L;
                best_W = W; 
            };
       
     }; 
     return { best_L, best_W};


    }
};