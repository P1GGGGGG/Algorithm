//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n, k;
//int a[N], t, t_m;
//int dp[N][2];
//set<int> s;
//
//int main() {
//    cin >> n >> k;
//    for (int i = 1; i <= n; ++i) {
//        cin >> t;
//        s.insert(t);
//        t_m = max(t_m, t);
//        a[t]++;
//    }
//    if (!k) {
//        cout << s.size();
//        return 0;
//    }
//    for (int i = 1; i < t_m + 1; ++i) {
//        a[i] += a[i - 1];
//    }
//    for (int i = 1; i < t_m + 1; i++) {
//        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
//        if (i >= k)
//            dp[i][1] = dp[i - k][0] + a[i] - a[i - k];
//        else
//            dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + a[i] - a[i - 1];
//    }
//    cout << max(dp[t_m][0], dp[t_m][1]);
//    return 0;
//}