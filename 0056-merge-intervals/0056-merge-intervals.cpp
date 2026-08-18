class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        res.push_back(intervals[0]);
        int n = intervals.size();
        for(int i = 1 ; i < n ; i++){
            int prev = res.back()[1];
            int newstart = intervals[i][0];
            int newend = intervals[i][1];
            if(prev < newstart){
                res.push_back(intervals[i]);
            }else {
                res.back()[1] = max(prev, newend);
            }
        }
        return res;
    }
};