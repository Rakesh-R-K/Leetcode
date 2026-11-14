class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> values = {
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}
        };
        int sum = 0, i = 0;
        while(i < s.length()){
            if(i + 1< s.length()){
                string two = s.substr(i, 2);
                if(values.find(two) != values.end()){
                    sum += values[two];
                    i += 2;
                    continue;
                }
            }
        string one = s.substr(i, 1);
        sum += values[one];
        i++;
        }
    return sum;
    }
};