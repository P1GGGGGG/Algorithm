//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10, mod = 100003;
//int n, m;
//int h[N], e[N * 2], ne[N * 2], idx;
//int dist[N], cnt[N];
//
//void add(int a, int b) {
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//void bfs() {
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0, cnt[1] = 1;
//    queue<int> q;
//    q.push(1);
//    while (q.size()) {
//        int t = q.front();
//        q.pop();
//        for (int i = h[t]; i != -1; i = ne[i]) {
//            int j = e[i];
//            if (dist[j] > dist[t] + 1) {
//                dist[j] = dist[t] + 1;
//                cnt[j] = cnt[t];
//                q.push(j);
//            } else if (dist[j] == dist[t] + 1) {
//                cnt[j] = (cnt[j] + cnt[t]) % mod;
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    memset(h, -1, sizeof h);
//    while (m--) {
//        int x, y;
//        cin >> x >> y;
//        add(x, y);
//        add(y, x);
//    }
//    bfs();
//    for (int i = 1; i <= n; ++i) {
//        cout << cnt[i] << endl;
//    }
//    return 0;
//}