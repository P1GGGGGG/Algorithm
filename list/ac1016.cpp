//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1010;
//
//int n;
//int a[N], dp[N];
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        dp[i] = max(a[i], dp[i]);
//        for (int j = i + 1; j < n; ++j) {
//            if (a[j] > a[i]) {
//                dp[j] = max(dp[j], dp[i] + a[j]);
//            }
//        }
//    }
//    int max1 = -1;
//    for (int i = 0; i < n; ++i) {
//        max1 = max(max1, dp[i]);
//    }
//    cout << max1;
//    return 0;
//}