class Solution {
public:
    int countVowelSubstrings(string word) {
        unordered_set<char> st = {'a', 'e', 'i', 'o',  'u'};
        map<char, int> f;
        int t = 0;
        
     
        int k = word.size();
        while (k>=5){
        for(auto i=0;i<word.size()-k+1;i++){
            string sb = word.substr(i, k);
            // cout << sb << " ";
            
            bool seq = false;
            char prev = ' ';
            bool other = false;
            for (auto ch : st) f[ch] = 0; 
            for (int i = 0; i<sb.size();i++){
                
               
                int cnt = 0;
                int j = i;
                while (j<sb.size()){
                    
                    if (st.find(sb[j])!=st.end()) f[sb[j]] = 1; else other = true;
                    j++;
                };
                for(auto p : f) cnt+= p.second;
                if (cnt >= 5) seq = true;
                if (seq) break;
            }

            if (seq && !other) { 
                t++; 
                // cout << "+"; 
            };
            // cout << endl;
            };
            k--;
        };
        return  t;
    }
};