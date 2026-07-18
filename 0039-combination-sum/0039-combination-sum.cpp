class Solution {
public:
    vector<vector<int>> res;
    vector<int> current;
    void solve(int index, vector<int>& candidates, int target){
        if(target == 0){
            res.push_back(current);
            return;
        }
        if(index == candidates.size() || target < 0){
            return;
        }
        current.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index]);
        current.pop_back();

        solve(index + 1, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0, candidates, target);
        return res;
    }
};