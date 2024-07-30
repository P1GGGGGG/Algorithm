//#include "bits/stdc++.h"
//
//using namespace std;
//
//#define N  1010
//int g[N][N];
//int sum[N][N];
//int q, n, m;
//int x, dx, y, dy;
//
//int main() {
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> g[i][j];
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + g[i][j];
//        }
//    }
//    while (q--) {
//        cin >> x >> y >> dx >> dy;
//        cout << sum[dx][dy] + sum[x - 1][y - 1] - sum[x - 1][dy] - sum[dx][y - 1] << endl;
//    }
//    return 0;
//}