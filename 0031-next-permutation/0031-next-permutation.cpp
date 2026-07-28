class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n - 2;
        while(k >= 0 && nums[k] >= nums[k+1]){
            k--;
        }
        if(k >= 0){
            int j = n - 1;
            while(nums[j] <= nums[k]){
                j--;
            }
            swap(nums[k], nums[j]);
        }
        reverse(nums.begin() + k + 1, nums.end());
    }
};