class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string ans = "";
        for (int i=a.size()-1, j=b.size()-1; i>=0 || j>=0; ) {
            if (i >= 0 && j >= 0) {
                char c = (a[i]-'0' + b[j]-'0' + carry)%2 + '0';
                carry = (a[i]-'0' + b[j]-'0' + carry)/2;
                ans.insert(ans.begin(), c);
                --i; --j;
            } else if (i >= 0) {
                char c = (a[i]-'0' + carry)%2 + '0';
                carry = (a[i]-'0' + carry)/2;
                ans.insert(ans.begin(), c);
                --i;
            } else if (j >= 0) {
                char c = (b[j]-'0' + carry)%2 + '0';
                carry = (b[j]-'0' + carry)/2;
                ans.insert(ans.begin(), c);
                --j;
            }
        }
        if (carry == 1) ans.insert(ans.begin(), '1');
        return ans;
    }
};