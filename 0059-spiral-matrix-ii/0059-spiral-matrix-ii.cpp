class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int count = 1;
        int left = 0, top = 0, bottom = n - 1, right = n - 1;
        while(left <= right && top <= bottom){

            for(int i = left ; i <= right ; i++){
                res[top][i] = count++;
            }
            top++;

            for(int j = top ; j <= bottom ; j++){
                res[j][right] = count++;
            }
            right--;
            for(int i = right ; i >= left ; i--){
                res[bottom][i] = count++;
            }
            bottom--;
            for(int j = bottom ; j >= top ; j--){
                res[j][left] = count++;
            }
            left++;
        }
        return res;
    }
};