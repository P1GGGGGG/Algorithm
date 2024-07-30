//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 100 + 10;
//
//int k, n;
//char g[N][N];
//bool st[N][N];
//int s_x, s_y, e_x, e_y;
//int dx[4] = {-1, 1, 0, 0};
//int dy[4] = {0, 0, -1, 1};
//typedef pair<int, int> PII;
//
////bool dfs(int x, int y) {
////    if (g[x][y] == '#') {
////        return false;
////    }
////    if (x == e_x && y == e_y) {
////        return true;
////    }
////    st[x][y] = true;
////    for (int i = 0; i < 4; ++i) {
////        int x1 = x + dx[i], y1 = y + dy[i];
////        if (st[x1][y1])continue;
////        if (x1 < 0 || x1 >= n || y1 < 0 || y1 >= n)continue;
////        if (dfs(x1, y1)) {
////            return true;
////        }
////    }
////    return false;
////}
//
//bool check(int x, int y) {
//    if (x < 0 || x >= n || y < 0 || y >= n)return false;
//    return true;
//}
//
//bool bfs(int x, int y) {
//    if (g[x][y] == '#' || g[e_x][e_y] == '#') {
//        return false;
//    }
//    queue<PII> q;
//    q.push({x, y});
//    st[x][y] = true;
//    while (q.size()) {
//        PII t = q.front();
//        q.pop();
//        x = t.first, y = t.second;
//        for (int i = 0; i < 4; ++i) {
//            int _x = x + dx[i], _y = y + dy[i];
//            if (_x == e_x && _y == e_y)return true;
//            if (!st[_x][_y] && check(_x, _y) && g[_x][_y] == '.') {
//                st[_x][_y] = true;
//                q.push({_x, _y});
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    cin >> k;
//    while (k--) {
//        cin >> n;
//        memset(st, false, sizeof st);
//        for (int i = 0; i < n; ++i) {
//            scanf("%s", g[i]);
//        }
//        cin >> s_x >> s_y >> e_x >> e_y;
//        if (bfs(s_x, s_y))puts("YES");
//        else puts("NO");
//    }
//    return 0;
//}