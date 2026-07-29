class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int count = 0;
        vector<int> temp(n, 1);
        for(int i = 1 ; i < n; i++){
            if(ratings[i] > ratings[i-1]){
                temp[i] = temp[i - 1] + 1;
            }
        }
        for(int i = n - 1 ; i > 0; i--){
            if(ratings[i - 1] > ratings[i]){
                temp[i - 1] = max(temp[i] + 1, temp[i - 1]);
            }
            count += temp[i - 1];
        }
        return count + temp[n - 1];
    }   
};