// Solution with randomized quick test
bool quickTest(string& w){
    int sz =  w.size();
    int i = rand() % sz;
    int j  = sz - 1 - i;
    return w[i]==w[j];
}

bool palin(string& w){
    int i=0;
    int j=w.size()-1;
    while (i<=j){
        if (w[i]!=w[j]) return false;
        i++;
        j--;
    };
    return true;
}

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        size_t sz = words.size();
        for(auto i=0;i<sz;i++){
            if (!quickTest(words[i])) continue;
            if (palin(words[i])) return words[i];
        };
        return "";
    }
};