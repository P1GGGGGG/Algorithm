//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 110;
//int T;
//typedef pair<int, int> PII;
//int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
//bool st[N][N];
//char g[N][N];
//int r, c, N1;
//
//bool check(int x, int y) {
//    if (x < 1 || x > r || y < 1 || y > c)return false;
//    return true;
//}
//
//void bfs(int i, int j) {
//    int hh = 0, tt = 0;
//    PII q[N * N];
//    q[0] = {i, j};
//    st[i][j] = true;
//    while (hh <= tt) {
//        PII t = q[hh++];
//        for (int k = 0; k < 4; ++k) {
//            int x = t.first + dx[k], y = t.second + dy[k];
//            if (st[x][y] || g[x][y] == '0' || !check(x, y))continue;
//            q[++tt] = {x, y};
//            st[x][y] = true;
//        }
//    }
//}
//
//int main() {
//    cin >> T;
//    for (int z1 = 1; z1 <= T; ++z1) {
//        cin >> r >> c;
//        for (int i = 1; i <= r; ++i) {
//            for (int j = 1; j <= c; ++j) {
//                cin >> g[i][j];
//            }
//        }
//        cin >> N1;
//        printf("Case #%d:\n", z1);
//        while (N1--) {
//            char op;
//            cin >> op;
//            if (op == 'M') {
//                int x, y;
//                char z;
//                cin >> x >> y >> z;
//                g[x + 1][y + 1] = z;
//            } else {
//                memset(st, false, sizeof st);
//                int res = 0;
//                for (int i = 1; i <= r; ++i) {
//                    for (int j = 1; j <= c; ++j) {
//                        if (g[i][j] == '1' && !st[i][j]) {
//                            res++;
//                            bfs(i, j);
//                        }
//                    }
//                }
//                cout << res << endl;
//            }
//        }
//    }
//    return 0;
//}