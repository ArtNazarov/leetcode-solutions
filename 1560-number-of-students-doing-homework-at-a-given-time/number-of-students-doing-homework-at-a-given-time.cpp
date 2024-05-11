class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
       int cnt = 0;
       size_t sz = startTime.size();
       for (size_t i=0;i<sz;i++){
         if (startTime[i]<=queryTime && queryTime <= endTime[i]) cnt++;
       };
       return cnt;
    }
};