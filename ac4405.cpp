//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//const int N = 505;
//int n, m;
//int x[N][N];
//ll sum[N][N], k, ans;
//
//int cal(int a, int b) {
//    int num = 0;
//    for (int i = a; i <= n; ++i) {
//        for (int j = b; j <= m; ++j) {
//            if (sum[i][j] - sum[i - a][j] - sum[i][j - b] + sum[i - a][j - b] <= k) {
//                num++;
//            }
//        }
//    }
//    return num;
//}
//
//int main() {
//    cin >> n >> m >> k;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> x[i][j];
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + x[i][j];
//        }
//    }
//    for (int i = n; i > 0; --i) {
//        for (int j = m; j > 0; --j) {
//            ans += cal(i, j);
////            cout << i << ' ' << j << ' ' << cal(i, j) << endl;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}