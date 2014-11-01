#include <cstdio>
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <cstring>
#include <string>
#include <map>
#include <stack>

using namespace std;

const int maxn = 100001;

int T;
int num[maxn];
int dp[maxn] = {0};
int le[maxn] = {0};

int main() {
    cin >> T;
    for (int ii = 0; ii < T; ++ii) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> num[i];
        dp[0] = num[0];
        le[0] = 1;
        int pos=0, ans = num[0];
        for (int i = 1; i < n; ++i) dp[i] = le[i] = INT_MIN;
        for (int i = 1; i < n; ++i) {
            if (dp[i-1] >= 0) {
                dp[i] = dp[i-1] + num[i];
                le[i] = le[i-1] + 1;
            } else {
                dp[i] = num[i];
                le[i] = 1;
            }
            if (dp[i] > ans) {
                ans = dp[i];
                pos = i;
            }
        }
        cout << "Case " << (ii+1) << ":" << endl;
        cout << ans << " ";
        cout << (pos-le[pos]+2) << " " << (pos+1) << endl;
        if (ii != T-1) cout << endl;
    }
    
    return 0;
}
