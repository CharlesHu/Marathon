class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        if (digits.size() == 0) return digits;
        int carry = (digits[digits.size()-1]+1)/10;
        digits[digits.size()-1] = (digits[digits.size()-1] + 1)%10;
        for (int i = digits.size()-2; i >= 0; --i) {
            if (carry == 0) break;
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }
        if (carry > 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};