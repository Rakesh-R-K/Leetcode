class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int smallest = nums[0];
        if(n <= 1) {
            return nums[0];
        }
        for(int i = 0 ; i < n ; i++){
            if(smallest > nums[i]){
                smallest = nums[i];
            }
        }
        return smallest;
    }
};