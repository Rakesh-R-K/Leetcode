class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res, n = nums.size();
        if(n < 2){return nums[0];}
        for(int i = 0 ; i < n ; i++){
            int product = 1;
            for(int j = i ; j < n ; j++){
                product *= nums[j];
                res = max(product, res);
            }
        }
        return res;
    }
};