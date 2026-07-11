class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        sort(nums.begin(), nums.end());
        int begin = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == begin){
                count++;
            }else {
                begin = nums[i];
                count = 1;
            }
            if(count > nums.size()/2){
                return begin;
            }
        }
        if(nums.size() < 2){
            return nums[0];
        }
        return 0;
    }
};