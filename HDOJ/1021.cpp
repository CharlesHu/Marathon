#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <vector>

using namespace std;

int n;

int main() {
    while (cin >> n) {
        if (n == 0) {
            cout << "no" << endl;
        } else if (n == 1) {
            cout << "no" << endl;
        } else if (n >= 2) {
            if ((n-2)%4==0) cout << "yes" << endl;
            else cout << "no" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}