class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int index_sum = INT_MAX;
        vector<string> res;
        
       for (int i=0; i<list1.size(); i++){
     
        for (int j=0;j<list2.size(); j++){
            if (i+j>index_sum) break;
            if (list1[i]==list2[j]){
                if (i+j < index_sum) { 
                    res.clear(); 
                    index_sum = i + j; 
                };
                if (i+j == index_sum) res.push_back(list1[i]);
                
            };
        };
       };
       return res; 
    }
};