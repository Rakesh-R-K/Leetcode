class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            if(nums[0] == nums[1]){
                return nums[0];    
            }
            return max(nums[0], nums[1]);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        int out = 0;
        for(int i = 1; i < nums.size() ; i++){
            if(nums[i] == nums[i - 1]){
                continue;
            }
            out++;
            if(out == 2){
                return nums[i];
            }
        }
        return nums[0];
    }
};