class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        
        int t = num / 1000;
        for (int i = 0; i < t; ++i) ans += "M";
        num -= t*1000;
        
        t = num / 100;
        if (t == 9) {
            ans += "CM";
        } else if (t == 4) {
            ans += "CD";
        } else if (t >= 5 && t <= 8) {
            ans += "D";
            for (int i = 6; i <= t; ++i) ans += "C";
        } else if (t >= 1 && t <= 3) {
            for (int i = 0; i < t; ++i) ans += "C";
        }
        num -= t*100;
        
        t = num / 10;
        if (t == 9) {
            ans += "XC";
        } else if (t == 4) {
            ans += "XL";
        } else if (t >= 5 && t <= 8) {
            ans += "L";
            for (int i = 6; i <= t; ++i) ans += "X";
        } else if (t >= 1 && t <= 3) {
            for (int i = 0; i < t; ++i) ans += "X";
        }
        num -= t*10;
        
        t = num / 1;
        if (t == 9) {
            ans += "IX";
        } else if (t == 4) {
            ans += "IV";
        } else if (t >= 5 && t <= 8) {
            ans += "V";
            for (int i = 6; i <= t; ++i) ans += "I";
        } else if (t >= 1 && t <= 3) {
            for (int i = 0; i < t; ++i) ans += "I";
        }
        return ans;
    }
};