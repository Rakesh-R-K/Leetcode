class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_len = 1;
        int current_len = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                current_len++;
                max_len = max(max_len, current_len);
            } else {
                current_len = 1;
            }
        }
        return max_len;
    }
};