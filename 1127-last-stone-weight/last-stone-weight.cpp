void getHeaviest(vector<int>& v, int &x, int&y){
    vector<int> ix(v.size());
    iota(ix.begin(), ix.end(), 0);
    sort(ix.begin(), ix.end(), [&v](auto i, auto j){return v[i] > v[j];});
    x = ix[0];
    y = ix[1];
}

void clear_index(vector<int>& v, int i){
    v.erase(v.begin()+i, v.begin()+i+1);
}

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size()>=2){
            int i; int j;

            getHeaviest(stones, i, j);
            //cout << "Heaviest are " << stones[i] << " and " << stones[j] << endl;
            if (stones[i]==stones[j]){
                // cout << "clear both" << endl;
                if (i>j) swap(i, j);
            clear_index(stones, i);
            clear_index(stones, j-1);
            } else {
                int x = stones[i];
                int y = stones[j];
                int to_delete = i;
                int keep = j;
                int new_val = abs( stones[i] - stones[j] );
                if (x>y) {
                    int keep = j;
                    to_delete = i;
                };
                  stones[keep] = new_val;
                clear_index(stones, to_delete);
                 

            };
            /*
            for (auto v : stones){
                cout << v << " ";
            };
            cout << endl;*/
        };
        return (stones.size()==0) ? 0 : stones[stones.size()-1];
    }
};