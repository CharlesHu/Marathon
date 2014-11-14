#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int T;
int y, n;

int main()
{
    cin >> T;
    while (T--) {
        cin >> y >> n;
        for (int i = 0; i < n; ++i) {
            while (!(y%4==0 && y%100!=0 || y%400==0)) ++y;
            ++y;
        }
        cout << y-1 << endl;
    }
    return 0;
}
