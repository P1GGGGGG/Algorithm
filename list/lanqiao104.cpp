//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int m, n;
//int w[N], h[N];
//int ans;
//
//int main() {
//
//    cin >> m >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> w[i] >> h[i];
//    }
//    for (int i = 1; i <= n; i++) {
//        int tmp = 0, res = 0, mm = m;
//        for (int j = 1; j <= n; j++) {
//            if (i == j)continue;
//            if (mm >= w[j]) {
//                mm -= w[j];
//                tmp = max(tmp, h[j]);
//            } else if (mm < w[j]) {
//                tmp = max(tmp, (int) ceil(1.0 * h[j] * mm / w[j]));
//                mm = 0;
//            }
//            if (mm == 0 || j==(n-(i==n))) {
//                res += tmp;
//                tmp = 0;
//                mm = m;
//            }
//        }
//        ans = min(ans, res);
//    }
//    cout << ans;
//    return 0;
//
//}