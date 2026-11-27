class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, max_ans = 0, zero = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zero++;
            }
            while(zero > k){
                if(nums[left] == 0){
                    zero--;
                }
                left++;
            }
            max_ans = max(max_ans, right - left + 1);
        }
        return max_ans;
    }
};