//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n, m;
//int idx, h[N], e[2 * N], ne[N * 2], w[N * 2];
//int dist[N];
//bool st[N];
//
//void add(int a, int b, int c) {
//    e[idx] = b, ne[idx] = h[a], w[idx] = c, h[a] = idx++;
//}
//
//void spfa() {
//    memset(dist, 0x3f, sizeof dist);
//    queue<int> q;
//    q.push(1);
//    dist[1] = 0, st[1] = true;
//    while (q.size()) {
//        int top = q.front();
//        q.pop();
//        st[top] = false;
//        for (int i = h[top]; i != -1; i = ne[i]) {
//            int j = e[i];
//            if (dist[j] > dist[top] + w[i]) {
//                dist[j] = dist[top] + w[i];
//                if (!st[j]) {
//                    q.push(j);
//                    st[j] = true;
//                }
//            }
//        }
//    }
//
//}
//
//int main() {
//    cin >> n >> m;
//    memset(h, -1, sizeof h);
//    while (m--) {
//        int x, y, z;
//        cin >> x >> y >> z;
//        add(x, y, z);
//    }
//    spfa();
//    if (dist[n] == 0x3f3f3f3f) puts("impossible");
//    else cout << dist[n] << endl;
//    return 0;
//}