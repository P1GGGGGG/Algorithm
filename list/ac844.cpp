//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//#define x first
//#define y second
//
//using namespace std;
//
//typedef pair<int, int> PII;
//const int N = 110;
//
//int n, m;
//int g[N][N], dist[N][N];
//
//void bfs() {
//    queue<PII> q;
//    q.push({0, 0});
//    memset(dist, 0x3f, sizeof dist);
//    dist[0][0] = 0;
//
//    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
//    while (q.size()) {
//        auto t = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int x = t.x + dx[i], y = t.y + dy[i];
//            if (x >= 0 && x < n && y >= 0 && y < m && dist[x][y] > dist[t.x][t.y] + 1 && !g[x][y]) {
//                dist[x][y] = dist[t.x][t.y] + 1;
//                q.push({x, y});
//            }
//        }
//    }
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            scanf("%d", &g[i][j]);
//
//    bfs();
//
//    printf("%d\n", dist[n - 1][m - 1]);
//
//    return 0;
//}
