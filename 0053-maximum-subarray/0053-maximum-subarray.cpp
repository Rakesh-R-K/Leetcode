class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0, maxi = nums[0], n = nums.size();
        for(int i = 0 ; i < n ; i++){
            current += nums[i];
            maxi = max(current, maxi);
            if(current < 0 ){
                current = 0;
            }
        }
        return maxi;
    }
};