#include<bits/stdc++.h>
using namespace std;

vector<int> p;
int find_set(int x) {
    return p[x] = p[x] == x ? x : find_set(p[x]);
}

void join(int x, int y) {
    p[find_set(x)] = find_set(y);
}

int main() {
    int n, k; scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++)
        p.push_back(i);

    for (int i = 0; i < k; i++) {
        char cmd; int p, q; scanf(" %c%d%d", &cmd, &p, &q);
        if (cmd == '=')
            join(p, q);
        if (cmd == '?')
            printf(find_set(p) == find_set(q) ? "yes\n" : "no\n");
    }
}

