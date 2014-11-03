#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int T;
int n;
vector<int> v;

void merge(vector<int> &v, int l, int mid, int r) {
    vector<int> a(v.begin()+l, v.begin()+mid+1);
    vector<int> b(v.begin()+mid+1, v.begin()+r+1);
    for (int i = 0, j = 0, k = l; i < mid+1-l || j < r-mid; ++k) {
        if (i < mid+1-l && j < r-mid) {
            if (a[i] < b[j]) v[k] = a[i++];
            else v[k] = b[j++];
        } else if (i < mid+1-l) {
            v[k] = a[i++];
        } else if (j < r-mid) {
            v[k] = b[j++];
        }
    }
}

void mergeSort(vector<int> &v, int l, int r) {
    if (l >= r) return ;
    int mid = (l+r)/2;
    mergeSort(v, l, mid);
    mergeSort(v, mid+1, r);
    merge(v, l, mid, r);
}

void print() {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
        if (i == v.size()-1) cout << endl;
        else cout << " ";
    }
}

int main()
{
    cin >> T;
    while (T--) {
        cin >> n;
        v.clear();
        for (int i = 0; i < n; ++i) {
            int t;
            cin >> t;
            v.push_back(t);
        }
        mergeSort(v, 0, v.size()-1);
        print();
    }
    return 0;
}
