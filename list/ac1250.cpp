//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 210;
//typedef pair<int, int> PII;
//int n, m, ans;
//PII p[N][N];
//
//PII find(int x, int y) {
//    PII pp = {x, y};
//    if (p[x][y] != pp) p[x][y] = find(p[x][y].first, p[x][y].second);
//    return p[x][y];
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            p[i][j] = make_pair(i, j);
//        }
//    }
//    while (m--) {
//        ans++;
//        int x, y, _x, _y;
//        char op;
//        cin >> x >> y >> op;
//        if (op == 'D') {
//            _x = x + 1, _y = y;
//        } else {
//            _x = x, _y = y + 1;
//        }
//        PII pp1 = find(x, y), pp2 = find(_x, _y);
//        if (pp1 != pp2) {
//            p[pp1.first][pp1.second] = pp2;
//        } else {
//            cout << ans << endl;
//            return 0;
//        }
//    }
//    cout << "draw" << endl;
//    return 0;
//}