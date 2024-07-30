//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 2e5 + 1;
//int t;
//int dp[N];
//int last; // flag 
//
//int cal(int x) {
//    int sum = 0;
//    while (x) {
//        sum += x % 10;
//        x /= 10;
//    }
//    return sum;
//}
//
//int main() {
//    cin >> t;
//    for (int i = 1; i < N; ++i) {
//        if (i >= 10) {
//            if (i % cal(i) == 0) {
//                dp[i] = 1;
//                last = i;
//            } else {
//                dp[i] = dp[last] + dp[i - last];
//            }
//        } else {
//            dp[i] = 1;
//            last = i;
//        }
//    }
//    while (t--) {
//        int n;
//        cin >> n;
//        cout << dp[n] << endl;
//    }
//    return 0;
//}