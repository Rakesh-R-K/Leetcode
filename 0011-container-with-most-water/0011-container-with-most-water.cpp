class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, max = 0;
        while(l<r){
            int min = (height[l]>height[r]) ? height[r] : height[l];
            int area = (r-l) * min;
            if(area > max){
                max = area;
            }
            if(height[l]<height[r]){
                l++;
            }else {
                r--;
            }
        } 
        return max;
    }
};