//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 201;
//typedef pair<int, int> PII;
//
//int t;
//int n, m;
//char grid[N][N];
//int dist[N][N];
//int dx[4] = {0, 0, -1, +1}, dy[4] = {-1, +1, 0, 0};
//
//int bfs(PII s, PII e) {
//    queue<PII> q;
//    memset(dist, -1, sizeof dist);
//    q.push(s);
//    dist[s.first][s.second]=0;
//    while (q.size()) {
//        PII loc = q.front();
//        q.pop();
//
//        for (int i = 0; i < 4; ++i) {
//            int x = loc.first + dx[i], y = loc.second + dy[i];
//            if (x < 0 || x >= n || y < 0 || y >= m) continue;
//            if (grid[x][y] == '#') continue;
//            if (dist[x][y] != -1)continue;
//
//            dist[x][y] = dist[loc.first][loc.second] + 1;
//            if (make_pair(x,y)==e) return dist[x][y];
//            q.push({x, y});
//        }
//    }
//    return -1;
//}
//
//int main() {
//    cin >> t;
//
//    while (t--) {
//        PII s, e;
//        cin >> n >> m;
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < m; ++j) {
//                cin >> grid[i][j];
//                if (grid[i][j] == 'S') {
//                    s.first = i, s.second = j;
//                }
//                if (grid[i][j] == 'E') {
//                    e.first = i, e.second = j;
//                }
//            }
//        }
//        //
//        int dis = bfs(s, e);
//        if (dis == -1) {
//            cout << "oop!" << endl;
//        } else {
//            cout << dis << endl;
//        }
//
//    }
//    return 0;
//}