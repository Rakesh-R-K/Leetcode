class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; i += 3){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
            if(nums[i+1] != nums[i+2]){
                return nums[i+2];
            }
        }
        return nums.back();
    }
};