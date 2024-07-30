//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int h[N], e[N * 2], ne[N * 2], w[N], idx;
//int n, ans;
//int dist[N], st[N];
//
//void add(int a, int b, int c) {
//    e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
//}
//
//void dfs(int i, int x) {
//    dist[i] = max(dist[i], x);
//    for (int j = h[i]; j != -1; j = ne[j]) {
//        int k = e[j];
//        if (!st[k]) {
//            st[k] = 1;
//            dfs(k, x + w[j]);
//            st[k] = 0;
//        }
//    }
//}
//
//int main() {
//    cin >> n;
//    memset(h, -1, sizeof h);
//    while (n--) {
//        int a, b, c;
//        cin >> a >> b >> c;
//        add(a, b, c);
//        add(b, a, c);
//    }
//    st[1] = 1;
//    dfs(1, 0);
//    for (int i = 1; i <= n; ++i) {
//        ans = max(ans, dist[i]);
//    }
//    cout << ans << endl;
//    return 0;
//}