// Using std functions
class Solution {
  public: vector < vector < int >> shiftGrid(vector < vector < int >> & grid, int k) {
    std::vector < int > vec;

    // flat grid to vector
    for (auto i = 0; i < grid.size(); i++) {
      std::copy(grid[i].begin(), grid[i].end(), back_inserter(vec));
    };

    // Rotate vec to k elements to the right
    std::rotate(vec.rbegin(), vec.rbegin() + k % vec.size(), vec.rend());

    std::vector < std::vector < int >> result;

    // unflat vector to grid
    int shift = grid[0].size();
    int i = 0;
    std::vector < int > range;
    while (i < vec.size()) {
      auto startElem = vec.begin() + i;
      auto afterLastElem = vec.begin() + i + shift;
      std::vector range = std::vector < int > (startElem, afterLastElem);
      result.push_back(range);
      i += shift;
    };
    return result;
  }
};