#include <iostream>
#include <vector>
using namespace std;
// check that index is in array's range
 bool isB(vector<vector<char>>& grid, int i, int j){
   return (i>=0) && (i<grid.size()) && (j>=0) && (j<grid[0].size());
 }

 bool isE(vector<vector<char>>& grid, int i, int j){
	 if (!isB(grid, i, j)) return false;
 	if (grid[i][j] == '0' ||  grid[i][j] == 'X') return false;
 	return true;
 }
 

 
 void getE(vector<vector<char>>& grid, int i, int j, vector<int>& x, vector<int>& y, int& e){
	if (!isB(grid, i, j)) return;
 	if (isE(grid, i, j)) {
 		x.push_back(i);
 		y.push_back(j);
 		grid[i][j]='X'; // visited
 		e--;
 	} else {
 		return ;
 	};
 	if (isB(grid, i-1, j)){
 		if (isE(grid, i-1, j)) {
 			getE(grid, i-1, j, x, y, e);
 		};
 	};
 	if (isB(grid, i+1, j)){
 		if (isE(grid, i+1, j)) {
 			getE(grid, i+1, j, x, y, e);
 		};
 	};
 	if (isB(grid, i, j-1)){
 		if (isE(grid, i, j-1)) {
 			getE(grid, i, j-1, x, y, e);
 		};
 	};
 	if (isB(grid, i, j+1)){
 		if (isE(grid, i, j+1)) {
 			getE(grid, i, j+1, x, y, e);
 		};
 	};
 	
 	
 	
 }

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int e = 0;
        for (auto r : grid) {
            for (auto x : r) {
                if (x == '1') e++;
            }
        };
        vector<int> x;
        vector<int> y;
        int islands = 0;
        bool removed;
        while (e!=0){
            removed = false;
            for (auto i=0; i<grid.size(); i++){
                for (auto j=0;j<grid[i].size(); j++){
                    if (grid[i][j]=='1') {
                        x.clear();
                        y.clear();
                        getE(grid, i, j, x, y, e);

                        islands++;
                        removed = true;
                        break;
                    };
                };
                if (removed ) break;
            };
        };
        return islands;
    }
};