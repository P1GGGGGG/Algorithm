//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 55;
//
//int w[N];
//int n;
//long long dp[N][N];
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> w[i];
//    }
//    for (int len = 3; len <= n; ++len) {
//        for (int i = 1; i + len - 1 <= n; ++i) {
//            int j = i + len - 1;
//            dp[i][j]=1e18;
//            for (int k = i + 1; k <= j - 1; ++k) {
//                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + 1ll * w[i] * w[j] * w[k]);
//            }
//        }
//    }
//    cout << dp[1][n];
//    return 0;
//}