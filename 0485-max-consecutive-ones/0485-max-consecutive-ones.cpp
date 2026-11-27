class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                count++;
                max_ans = max(count, max_ans);
            }else {
                count = 0;
            }
        }
        return max_ans;
    }
};