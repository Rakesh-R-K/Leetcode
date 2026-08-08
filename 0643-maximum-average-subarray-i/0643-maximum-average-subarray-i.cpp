class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res;
        for(int i = 0 ; i < k ; i++){
            res += nums[i];
        }
        double maxi = res;
        for(int i = k ; i < nums.size(); i++){
            res += nums[i] - nums[i - k];
            maxi = max(maxi, res); 
        }
        return maxi/k;
    }
};