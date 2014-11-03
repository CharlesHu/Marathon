#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int n;
stack<char> stk;
string a, b;
bool ans;
vector<int> re;

void print() {
    if (ans) {
        cout << "Yes." << endl;
        for (int i = 0; i < re.size(); ++i) {
            if (re[i] == 0) cout << "in" << endl;
            else cout << "out" << endl;
        }
    }
    else cout << "No." << endl;
    cout << "FINISH" << endl;
}

int main()
{
    while (cin >> n >> a >> b) {
        re.clear();
        ans = false;
        int j = 0;
        while (!stk.empty()) stk.pop();
        for (int i = 0; i < n; ++i) {
            stk.push(a[i]);
            re.push_back(0);
            while (!stk.empty() && j < n) {
                char c = stk.top();
                if (b[j] == c) {
                    ++j;
                    stk.pop();
                    re.push_back(1);
                } else {
                    break;
                }
            }
        }
        if (stk.empty() && j == n) ans = true;
        print();
    }
    return 0;
}
