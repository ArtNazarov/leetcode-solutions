void computeLPSMap(string& pat, map<int, int>& lps)
{
    string_view s = pat;
    int n = s.size();
	 
	for (int i=0; i<n; ++i)
		for (int k=0; k<=i; ++k)
			if (s.substr(0,k) == s.substr(i-k+1,k))
				lps[i] = k;
	 
}


#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        string_view s1 = haystack;
        string_view s2 = needle;
        int m = s1.size();
        int n = s2.size();
        if (n > m) return -1;
        map<int, int> lps;
        computeLPSMap(needle, lps);
        for(auto p : lps) cout << p.first << " " << p.second << endl;
    int M = needle.size();
    int N = haystack.size();
 
     
 
    int i = 0;  
    int j = 0; 
    while ((N - i) >= (M - j)) {
        if (needle[j] == haystack[i]) {
            j++;
            i++;
        }
 
        if (j == M) {
            return i - j;
            j = lps[j - 1];
        }
 
         
        else if (i < N && needle[j] != haystack[i]) {
             
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    };
    return -1;
    }
};