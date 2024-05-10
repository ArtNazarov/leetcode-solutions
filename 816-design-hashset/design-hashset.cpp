// Solution with vector of lists
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
const int max_size = 10103;

class MyHashSet {
public:
    MyHashSet() :  cells(max_size){
        
    }
    
    void add(int key) {
        if (contains(key)) return;
         
        int cellId = key % max_size;
        cells[cellId].push_back(key);
    }
    
    void remove(int key) {
        if (!contains(key)) return;
        int cellId = key % max_size;
        auto ptr = find(cells[cellId].begin(), cells[cellId].end(), key);
        if (ptr != cells[cellId].end()) cells[cellId].erase(ptr);
    }
    
    bool contains(int key) {
        int cellId = key % max_size;
        if (cells[cellId].size()==0) return false;
        vector<int> keys;
        copy(cells[cellId].begin(), cells[cellId].end(), back_inserter(keys));
        sort(keys.begin(), keys.end());
        return binary_search(keys.begin(), keys.end(), key);
    }
    private:
        vector<list<int>> cells;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */