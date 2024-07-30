//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 4e4 + 10;
//const int M = 2 * N;
//int h[N], e[M], ne[M], idx;
//int depth[N], fa[N][16];
//int q[N];
//int n, m;
//
//void add(int a, int b) {
//    e[idx] = b;
//    ne[idx] = h[a];
//    h[a] = idx++;
//}
//
//void bfs(int root) {
//    memset(depth, 0x3f, sizeof depth);
//    depth[0] = 0, depth[root] = 1;
//    int hh = 0, tt = 0;
//    q[0] = root;
//    while (hh <= tt) {
//        int t = q[hh++];
//        for (int i = h[t]; ~i; i = ne[i]) {
//            int j = e[i];
//            if (depth[j] > depth[t] + 1) {
//                depth[j] = depth[t] + 1;
//                q[++tt] = j;
//                fa[j][0] = t;
//                for (int k = 1; k <= 15; k++)
//                    fa[j][k] = fa[fa[j][k - 1]][k - 1];
//            }
//        }
//    }
//}
//
//int lca(int a, int b) {
//    if (depth[a] < depth[b])swap(a, b);
//    int diff = depth[a] - depth[b];
//    for (int i = 0; i < 16; ++i) {
//        if ((diff >> i) & 1)
//            a = fa[a][i];
//    }
//    if (a == b)return a;
//    for (int i = 15; i >= 0; --i) {
//        if (fa[a][i] != fa[b][i]) {
//            a = fa[a][i];
//            b = fa[b][i];
//        }
//    }
//    return fa[a][0];
//}
//
//int main() {
//    cin >> n;
//    int root = 0;
//    memset(h, -1, sizeof h);
//    for (int i = 0; i < n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        if (b == -1)root = a;
//        else add(a, b), add(b, a);
//    }
//    bfs(root);
//    cin >> m;
//    while (m--) {
//        int a, b;
//        cin >> a >> b;
//        int p = lca(a, b);
//        if (p == a)puts("1");
//        else if (p == b)puts("2");
//        else puts("0");
//    }
//    return 0;
//}