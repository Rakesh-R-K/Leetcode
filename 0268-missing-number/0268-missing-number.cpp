class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0, sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        res = (((nums.size())*(nums.size() + 1)) / 2) - sum;
        return res;
    }
};