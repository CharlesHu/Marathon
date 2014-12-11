class Solution {
public:
    string convert(string s, int nRows) {
        string ans = "";
        if (nRows == 1) return s;
        for (int i = 0; i < nRows; ++i) {
            if (i == 0) {
                for (int j = 0; j*(2*nRows-2)+i < s.size(); ++j) {
                    ans += s[j*(2*nRows-2)+i];
                }
            } else if (i > 0 && i < nRows-1) {
                for (int j = 0; j*(2*nRows-2)+i < s.size()||(2*nRows-2)*(j+1)-i<s.size(); ++j) {
                    if (j*(2*nRows-2)+i < s.size()) ans += s[j*(2*nRows-2)+i];
                    if ((2*nRows-2)*(j+1)-i<s.size()) ans += s[(2*nRows-2)*(j+1)-i];
                }
            } else {
                for (int j = 0; j*(2*nRows-2)+i < s.size(); ++j) {
                    ans += s[j*(2*nRows-2)+i];
                }
            }
        }
        return ans;
    }
};