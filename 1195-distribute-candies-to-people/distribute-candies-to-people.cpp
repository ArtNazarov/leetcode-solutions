// Using cycle while
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people);
        int index = 0;
        int cnt = 0;
        while (candies>0){
            cnt++;
            if (candies>=cnt) {
                candies-=cnt;
                v[index] += cnt;
            } else break;
            index = (index + 1) % num_people;
            //cout << "cnt = " << cnt << " " << " candies = " << candies << endl;
            //for (auto x : v) { cout << x << " ";}; cout << endl;
        };
        if (cnt>0) {v[ index  ]+=candies;};
        return v;
    }
};