class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res = 0, sum = 0;
        unordered_map<int, int> freq;
        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            freq[nums[j]]++;
            if( j >= k){
                int left = nums[j - k];
                sum -= left;
                if(--freq[left] == 0){
                    freq.erase(left);
                }
            }
            if(j >= k - 1 && freq.size() == k){
                res = max(res, sum);
            }
        }
        return res;
    }
};