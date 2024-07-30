//#include <bits/stdc++.h>
//using namespace std;
//const int N = 100010;
//int dp[N], n, m, x;
//
//int main() {
//    cin >> n >> m >> x;
//    unordered_map<int, int> last;
//    for(int i=1; i<=n; i++) {
//        int a; cin >> a;
//        dp[i] = max(dp[i-1], last[x ^ a]);
//        last[a] = i;
//    }
//
//    while (m -- ) {
//        int l, r; cin >> l >> r;
//        cout << (dp[r] >= l ? "yes" : "no") << endl;
//    }
//
//    return 0;
//}
//
