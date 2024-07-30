#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 100010, M = 300010, INF = 0x3f3f3f3f;

int n, m, Q;
struct Edge {
    int a, b, c;
    bool operator< (const Edge& t) const {
        return c > t.c;
    }
}edges[M];
int p[N];
int h[N], e[M], w[M], ne[M], idx;
int depth[N], fa[N][21], way[N][21];
int dist[N];
int q[N];
bool st[N];

void add(int a, int b, int c) {
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx ++ ;
}

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void kruskal() {
    sort(edges, edges + m);

    for (int i = 1; i <= n; i ++ ) p[i] = i;

    for (int i = 0; i < m; i ++ ) {
        int a = edges[i].a, b = edges[i].b, c = edges[i].c;
        int x = find(a), y = find(b);
        if (x != y) {
            p[x] = y;
            add(a, b, c), add(b, a, c);
        }
    }
}

void bfs(int root) {
    depth[0] = 0, depth[root] = 1;

    int hh = 0, tt = 0;
    q[0] = root;
    st[root] = true;

    while (hh <= tt) {
        auto t = q[hh ++ ];
        for (int i = h[t]; ~i; i = ne[i]) {
            int j = e[i];
            if (depth[j] > depth[t] + 1) {
                st[j] = true;
                q[ ++ tt] = j;
                depth[j] = depth[t] + 1;
                fa[j][0] = t;
                way[j][0] = w[i];
                for (int k = 1; k <= 20; k ++ ) {
                    fa[j][k] = fa[fa[j][k - 1]][k - 1];
                    way[j][k] = min(way[j][k - 1], way[fa[j][k - 1]][k - 1]);
                }
            }
        }
    }
}

int lca(int a, int b) {
    if (depth[a] <= depth[b]) swap(a, b);
    int res = INF;
    for (int k = 20; k >= 0; k -- ) {
        if (depth[fa[a][k]] >= depth[b]) {
            res = min(res, way[a][k]);
            a = fa[a][k];
        }
    }
    if (a == b) return res;
    for (int k = 20; k >= 0; k -- ) {
        if (fa[a][k] != fa[b][k]) {
            res = min(res, min(way[a][k], way[b][k]));
            a = fa[a][k];
            b = fa[b][k];
        }
    }

    return min(res, min(way[a][0], way[b][0]));
}

int main() {
    cin >> n >> m >> Q;
    for (int i = 0; i < m; i ++ ) {
        int a, b, c;
        cin >> a >> b >> c;
        edges[i] = {a, b, c};
    }

    memset(h, -1, sizeof h);
    kruskal();

    memset(depth, 0x3f, sizeof depth);
    for (int i = 1; i <= n; i ++ ) {
        if (!st[i]) bfs(i);
    }

    while (Q -- ) {
        int a, b;
        cin >> a >> b;
        if (find(a) != find(b)) puts("-1");
        else {
            int res = lca(a, b);
            printf("%d\n", res);
        }
    }

    return 0;
}
