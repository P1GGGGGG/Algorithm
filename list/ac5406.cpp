//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 1e6 + 10;
//
//char s[N];
//int dp[N][2];
//
//int main() {
//    cin >> s + 1;
//    int n = strlen(s+1);
//    for (int i = 1; i <= n; ++i) {
//        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
//        dp[i][1] = dp[i - 1][0] + s[i] - 'a' + 1;
//
//    }
//    cout << max(dp[n][0], dp[n][1]);
//    return 0;
//}