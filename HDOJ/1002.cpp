#include <iostream>
#include <string>

using namespace std;

int T;
string a, b;

int main()
{
    cin >> T;
    for (int ii = 1; ii <= T; ++ii) {
        cin >> a >> b;
        int carry = 0;
        string ans = "";
        for (int i=a.size()-1, j=b.size()-1; i>=0 || j>=0; --i, --j) {
            int t = 0;
            if (i >= 0 && j >= 0) {
                t = a[i]-'0' + b[j]-'0' + carry;
            } else if (i >= 0) {
                t = a[i]-'0' + carry;
            } else if (j >= 0) {
                t = b[j]-'0' + carry;
            }
            carry = t/10;
            ans.insert(ans.begin(), ('0'+t%10));
        }
        if (carry != 0) ans.insert(ans.begin(), ('0'+carry));
        cout << "Case " << ii << ":" << endl;
        cout << a << " + " << b << " = " << ans << endl;
        if (ii != T) cout << endl;
    }
    return 0;
}
