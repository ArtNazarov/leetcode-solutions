#include <set>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <utility>
#include <ranges>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> result;
        multiset<pair<string, string>> voc;
        for (const auto& s : strs){

            string key = s;
            ranges::sort(key);
            voc.insert({key, s});
        };

        string lastKey = " ";
        int k = 0;
        for (const auto& e : voc){
            auto key = e.first;
            auto value = e.second;
	    cout << key << "  " << value << "\n";
            if (lastKey!=key){
                    result.push_back({value}); // add empty array
                    auto vec = result[k];
                    k++;
                    lastKey = key;
                } else {
			result[result.size()-1].push_back(value);
		};
            };
        return result;
        };


    };