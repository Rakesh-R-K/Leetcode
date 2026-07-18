class Solution {
public:
    vector<vector<int>> res;
    vector<int> current;
    
    void solve(int index, vector<int>& candidates, int target){
        if(target == 0){
            res.push_back(current);
            return;
        }
        for(int i = index; i < candidates.size() ; i++){
            if(i > index && candidates[i] == candidates[i-1]){
                continue;
            }
            if(candidates[i] > target){ break;}
            current.push_back(candidates[i]);
            solve(i + 1, candidates, target - candidates[i]);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        solve(0, candidates, target);
        return res;
    }
};