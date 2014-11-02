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

int cal(int n) {
    int ans = 1;
    if (n <= 0) return 1;
    for (int i = 1; i <= n; ++i) ans *= i;
    return ans;
}

int main() {
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    double t = 0;
    cout << "0 1\n1 2\n2 2.5\n";
    t = 2.5;
    for (int i = 3; i < 10; ++i) {
        t += (double)1/(double)cal(i);
        cout << i << " ";
        printf("%.9f\n", t);
    }
    return 0;
}
