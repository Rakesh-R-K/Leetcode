class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int chars[26] = {0};
        for(int i = 0 ; i < s.length() ; i++){
            chars[s[i] - 'a']++;
            chars[t[i] - 'a']--;
        }
        for(int count : chars){
            if(count != 0){
                return false;
            }
        }
        return true;
    }
};