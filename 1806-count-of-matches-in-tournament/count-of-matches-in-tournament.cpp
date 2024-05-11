// Using functions
int getAdvance(int teams){
    int advance = 0;
    if (teams % 2 == 0) {
            advance = teams >> 1;
         } else {
            advance = 1 + (teams >> 1);
         };
    return advance;
}

int getMatches(int teams, int advance){
    return teams - advance;
}

class Solution {
public:
    int numberOfMatches(int n) {
       

       int s = 0;
       int teams = n; 
       int matches = 0;
       int advance = 0;
      do {
            advance = getAdvance(teams);
            matches = getMatches(teams, advance);
         // cout << "Teams: " << teams << " Matches: " << matches << " Advance:" << advance << endl;

            teams = advance;
            s += matches;
      } while (teams>1);
       
        return  s;
    }
};