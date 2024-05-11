class Solution {
public:
    string reformatDate(string date) {
        size_t psDay = string::npos;
        vector<string> pref = {"st", "th", "nd", "rd"};
        for (auto p : pref){
            psDay = min(psDay, date.find(p));
        };
        string stDay = date.substr(0, psDay);
        if (stDay.size()==1) stDay = "0"+ stDay;
        unordered_map<string, int> mons = { {"Jan" , 1}, {"Feb", 2}, {"Mar" , 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8}, {"Sep", 9}, {"Oct" , 10}, {"Nov" , 11}, {"Dec" , 12}};
        string stMon = date.substr(psDay+3, 3);
        stMon = to_string(mons[stMon]);
        if (stMon.size()==1) stMon = "0" + stMon;
        string stYear = date.substr(date.size()-4, 4);
        string res = stYear+"-"+stMon+"-"+stDay;

        return res;        
    }
};