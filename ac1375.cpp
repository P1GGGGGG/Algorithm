//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 60;
//
//int n = 52, m;
//int g[N][N], dist[N];
//bool st[N];
//
//int get(char c) {
//    if (c <= 'Z') return c - 'A' + 1;
//    return c - 'a' + 27;
//}
//
//void dijkstra() {
//    memset(dist, 0x3f, sizeof dist);
//    dist[26] = 0;
//
//    for (int i = 0; i < n - 1; i ++ )
//    {
//        int t = -1;
//        for (int j = 1; j <= n; j ++ )
//            if (!st[j] && (t == -1 || dist[j] < dist[t]))
//                t = j;
//        st[t] = true;
//        for (int j = 1; j <= n; j ++ )
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//    }
//}
//
//int main() {
//    cin >> m;
//    memset(g, 0x3f, sizeof g);
//
//    while (m--) {
//        char a, b;
//        int c;
//        cin >> a >> b >> c;
//        int x = get(a), y = get(b);
//        g[x][y] = g[y][x] = min(g[x][y], c);
//    }
//
//    dijkstra();
//
//    int res = 1;
//    for (int i = 2; i <= 25; i++)
//        if (dist[i] < dist[res])
//            res = i;
//
//    cout << (char) (res - 1 + 'A') << ' ' << dist[res] << endl;
//    return 0;
//}
//
