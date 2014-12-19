/*
 编写一个可完成拓扑排序的程序，这个程序采用邻接表存储有向图，图的每个顶点存储一个表示此顶点的字符。在测试数据中，图以邻接矩阵的方式给出，如果两个顶点之间有边，则矩阵元素值为1，否则为0.测试数据的第一行是一组字符，表示有向图各顶点。随后是n行矩阵元素，每行有n个值，每个值之间以空格分隔。值为0或1. 程序的输出是给出对这个图进行拓扑排序的结果，每个顶点之间用一个空格分隔。例如
 ABCDEFGHIJKL
 0 1 1 1 0 0 0 0 0 0 0 1
 0 0 1 0 0 0 0 0 0 0 0 0
 0 0 0 0 1 0 1 1 0 0 0 0
 0 0 0 0 1 0 0 0 0 0 0 0
 0 0 0 0 0 0 1 0 0 0 0 0
 0 0 0 0 0 0 0 1 0 0 0 0
 0 0 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 1 1 1
 0 0 0 0 0 0 0 0 0 0 0 1
 0 0 0 0 0 1 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0 0 0
 其输出结果不唯一，可以是AIBDJKCLFEGH。
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

struct ListNode {
    ListNode *next;
    int val;
    ListNode(int x): next(NULL), val(x) {}
};

int main() {

    string s = "";
    cin >> s;
    
    map<char, ListNode *> m;
    
    long long len = s.size();
    vector<int> indegree(len, 0);
    
    for (int i = 0; i < len; ++i) {
        ListNode *pre = new ListNode(0), *p = pre;
        for (int j = 0; j < len; ++j) {
            int t = 0;
            cin >> t;
            if (t == 1) {
                p->next = new ListNode(j);
                p = p->next;
                indegree[j]++;
            }
        }
        m[s[i]] = pre->next;
    }
    bool f = true;
    string ans = "";
    vector<int> visited(len, 0);
    while (f) {
        bool allIsOne = true;
        f = false;
        vector<int> tmp = indegree;
        for (int i = 0; i < indegree.size(); ++i) {
            if (tmp[i] == 0 && !visited[i]) {
                visited[i] = 1;
                ans += s[i];
                ListNode *p = m[s[i]];
                while (p) {
                    indegree[p->val]--;
                    p = p->next;
                }
                m[s[i]] = NULL;
                allIsOne = false;
            } else if (!visited[i]) {
                f = true;
            }
        }
        if (allIsOne) {
            cout << "wrong input" << endl;
            return 0;
        }
    }
    cout << ans << endl;
    
    return 0;
}
