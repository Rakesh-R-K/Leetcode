class Solution {
public:
    bool isPalindrome(string s) {
        string newc= "";
        for(char i : s){
            if(isalnum(i)){
                newc += tolower(i);
            }
        }
        int l = 0, r = newc.size() - 1;
        while(l < r){
            if(newc[l++] != newc[r--]){
                return false;
            }
        }
        return true;
    }
};