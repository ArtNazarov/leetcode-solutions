#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <ranges>

using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       const int FVALUE = 1000000;

        map<int, int> freq;
        

        for (auto v : nums){
            freq[v]++;
        };

  
  
		
		
        int desired = floor(nums.size() / 3);

	
		
        for_each(nums.begin(), nums.end(),  
            [  freq,   desired](int& e){ 
				
				auto it = freq.find(e);
				
				if ( it->second  <= desired) { 
					
				e = FVALUE; }; 
			
			});
  
	
        ranges::sort(nums); 
       
        nums.erase(std::remove(nums.begin(), nums.end(), FVALUE), nums.end());
		
		auto it = unique(nums.begin(), nums.end()); 
		nums.erase( it, nums.end() );
		
		
        return nums;
    
    }
};