//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1010;
//int g[N][N], mn[N][N], mn2[N][N],mx2[N][N],mx[N][N];
//long long ans;
//
//int main() {
//    int n, m, a, b;
//    cin >> n >> m >> a >> b;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= m; ++j) {
//            cin >> g[i][j];
//        }
//    deque<int> q;
//    for (int i = 1; i <= n; i++) {
//        q.clear();
//        for (int j = 1; j <= m; ++j) {
//            while (q.size() && q.back() > g[i][j])
//                q.pop_back();
//            q.push_back(g[i][j]);
//            if (j - b >= 1 && q.front() == g[i][j - b])
//                q.pop_front();
//            mn[i][j] = q.front();
//        }
//    }
//    for (int j = 1; j <= m; j++) {
//        q.clear();
//        for (int i = 1; i <= n; ++i) {
//            while (q.size() && q.back() > mn[i][j])
//                q.pop_back();
//            q.push_back(mn[i][j]);
//            if (i - a >= 1 && q.front() == mn[i - a][j])
//                q.pop_front();
//            mn2[i][j] = q.front();
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        q.clear();
//        for (int j = 1; j <= m; ++j) {
//            while (q.size() && q.back() < g[i][j])
//                q.pop_back();
//            q.push_back(g[i][j]);
//            if (j - b >= 1 && q.front() == g[i][j - b])
//                q.pop_front();
//            mx[i][j] = q.front();
//        }
//    }
//    for (int j = 1; j <= m; j++) {
//        q.clear();
//        for (int i = 1; i <= n; ++i) {
//            while (q.size() && q.back() < mx[i][j])
//                q.pop_back();
//            q.push_back(mx[i][j]);
//            if (i - a >= 1 && q.front() == mx[i - a][j])
//                q.pop_front();
//            mx2[i][j] = q.front();
//        }
//    }
//    for (int i = a; i <= n; ++i) {
//        for (int j = b; j <= m; ++j) {
//            ans += 1LL * mx2[i][j] * mn2[i][j];
//            ans %= 998244353;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}
//
