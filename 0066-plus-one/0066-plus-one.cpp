class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), c = 1;
        for(int i = n-1 ; i >= 0; i--){
            int sum = digits[i] + c;
            digits[i] = sum % 10;
            c = sum / 10;
        }
        if(c){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};