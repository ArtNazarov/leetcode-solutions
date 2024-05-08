struct TimeStruct {
    int h;
    int m;
};

// counter
void processComb(vector<int>& v, vector<TimeStruct>& s){
    int h = 0;
    int m = 0;
    for (auto x : v){
        if (x < 0) h+=-x;
        if (x > 0) m+=x;
    };
    TimeStruct ts;
    ts.h = h;
    ts.m = m;
    if (ts.h<12 && ts.m<60) s.push_back(ts);    
}

// pass void function as argument and counter
void generateCombinations(vector<int>& nums, vector<int>& current, int index, int k,
void (*process)(vector<int>&, vector<TimeStruct>& s), vector<TimeStruct>& s
) {
    if (current.size() == k) {
        //for(auto x : current) { cout << x << " "; }; cout << endl;
        processComb(current, s);
        return;
    }

    for (int i = index; i < nums.size(); ++i) {
        current.push_back(nums[i]);
        generateCombinations(nums, current, i + 1, k, processComb, s);
        current.pop_back();
    }
    
}

void processAllDigits(vector<TimeStruct>& s, int k){
     vector<int> nums = {-8, -4, -2, -1, 32, 16, 8, 4, 2, 1};
     vector<int> comb;
     generateCombinations(nums, comb, 0 , k , processComb , s );
}

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
         vector<string> s = {};
         vector<TimeStruct> res = {};
         if (turnedOn<9){
            processAllDigits(res, turnedOn);

           
            int sz = res.size();
            for (int i=0;i<sz-1;i++){
                for(int j=i+1;j<sz;j++){
                    TimeStruct x = res[i];
                    TimeStruct y = res[j];
                    if ((x.h>y.h)||(x.h==y.h && x.m>y.m)){
                        swap(res[i], res[j]);
                    };
                }
            }
          for (auto x : res){
                int h = x.h; int m = x.m;
                string M = to_string(m);
                if (m<10) { string t = "0"; t += M; M = t; }; 
                s.push_back(to_string(h)+":"+M);
         };
          
         };
        // for (auto st : s) { cout << st << endl;};
         return s;
    }
};