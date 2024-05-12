// Using lamda
#include <sstream>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       vector<size_t> idx(sentences.size());
       vector<size_t> word_count(sentences.size());
       int index = 0;
       for (auto s : sentences){
            stringstream ss(s);
            string w;
            int cnt = 0;
            while (ss >> w) cnt++;
            word_count[index] = cnt;
            index++;
       };
       iota(idx.begin(), idx.end(), 0);
       stable_sort(idx.begin(), idx.end(),
       [&word_count](size_t i1, size_t i2){
        return word_count[i1] < word_count[i2];
        });
       return (int) word_count[idx[idx.size()-1]]; 
    }
};