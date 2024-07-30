//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 3010;
//int n, m, p;
//int g[N][N], h[N][N];
//int ans;
//
//int work(int i) {
//    stack<int> s1, s2;
//    int l[N], r[N];
//    h[i][0] = -1, h[i][m + 1] = -1;
//    s1.push(0);
//    for (int j = 1; j <= m; ++j) {
//        while (h[i][j] <= h[i][s1.top()])s1.pop();
//        l[j] = s1.top();
//        s1.push(j);
//    }
//    s2.push(m + 1);
//    for (int j = m; j >= 1; --j) {
//        while (h[i][j] <= h[i][s2.top()])s2.pop();
//        r[j] = s2.top();
//        s2.push(j);
//    }
//    int res = 0;
//    for (int j = 1; j <= m; ++j) {
//        res = max(res, h[i][j] * (r[j] - l[j] - 1));
//    }
//    return res;
//}
//
//int main() {
//    cin >> n >> m >> p;
//    while (p--) {
//        int x, y;
//        cin >> x >> y;
//        g[x][y] = 1;
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (!g[i][j])h[i][j] = h[i - 1][j] + 1;
//        }
//    }
//    for (int i = 1; i <= n; ++i) {
//        ans = max(ans, work(i));
//    }
//    cout << ans << endl;
//    return 0;
//}