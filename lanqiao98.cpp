//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 101;
//const int MAX = 1e5 + 10;
//
//int a[N], n, tmp, res;
//int dp[MAX];
//
//int gcd(int a, int b) {
//    return b ? gcd(b, a % b) : a;
//}
//
//int main() {
//    cin >> n;
//    memset(dp, 0, sizeof(dp));
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//        tmp = gcd(tmp, a[i]);
//    }
//
//    if (tmp != 1) {
//        cout << "INF" << endl;
//        return 0;
//    } else {
//        dp[0] = 1;
//        for (int i = 0; i < n; ++i) {
//            for (int j = a[i]; j < MAX; ++j) {
//                if (dp[i])continue;
//                dp[j] = dp[j - a[i]];
//            }
//        }
//        for (int i = 1; i < MAX; ++i) {
//            if (!dp[i]) {
//                res++;
//            }
//        }
//        cout << res << endl;
//    }
//    return 0;
//}