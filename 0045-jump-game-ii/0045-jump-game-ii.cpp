class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1){return 0;}
        int jump = 0, curr = 0, maxi = 0;
        for(int i = 0 ; i < n - 1; i++){
            maxi = max(maxi, i+nums[i]);
            if(i == curr){
                ++jump;
                curr = maxi;
                if(curr >= n - 1){break;}
            }
        }
        return jump;
    }
};