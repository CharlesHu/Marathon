class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); ) {
            if (s[i] ==  'M') {
                int c = 0;
                while (i < s.size() && s[i] == 'M') { ++i; ++c; }
                ans += c*1000;
            } else if (s[i] == 'D') {
                ans += 500;
                ++i;
                int c = 0;
                while (i < s.size() && s[i] == 'C') { ++i; ++c; }
                ans += c*100;
            } else if (s[i] == 'C') {
                if (i+1 < s.size() && s[i+1] == 'M') {
                    ans += 900;
                    i = i + 2;
                } else if (i+1 < s.size() && s[i+1] == 'D') {
                    ans += 400;
                    i = i + 2;
                } else {
                    int c = 0;
                    while (i < s.size() && s[i] == 'C') { ++i; ++c; }
                    ans += 100*c;
                }
            } else if (s[i] == 'L') {
                ans += 50;
                ++i;
                int c = 0;
                while (i < s.size() && s[i] == 'X') { ++i; ++c; }
                ans += c*10;
            } else if (s[i] == 'X') {
                if (i+1 < s.size() && s[i+1] == 'C') {
                    ans += 90;
                    i = i + 2;
                } else if (i+1 < s.size() && s[i+1] == 'L') {
                    ans += 40;
                    i = i + 2;
                } else {
                    int c = 0;
                    while (i < s.size() && s[i] == 'X') { ++i; ++c; }
                    ans += 10*c;
                }
            } else if (s[i] == 'V') {
                ans += 5;
                ++i;
                int c = 0;
                while (i < s.size() && s[i] == 'I') { ++i; ++c; }
                ans += c*1;
            } else if (s[i] == 'I') {
                if (i+1 < s.size() && s[i+1] == 'X') {
                    ans += 9;
                    i = i + 2;
                } else if (i+1 < s.size() && s[i+1] == 'V') {
                    ans += 4;
                    i = i + 2;
                } else {
                    int c = 0;
                    while (i < s.size() && s[i] == 'I') { ++i; ++c; }
                    ans += 1*c;
                }
            }
        }
        return ans;
    }
};