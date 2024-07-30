//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 110;
//int n;
//int w[N];
//int f[N][N];
//
//
//int main() {
//    scanf("%d", &n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &w[i]);
//    }
//    for (int len = 1; len <= n; ++len) {
//        for (int i = 0; i + len - 1 < n; ++i) {
//            int j = i + len - 1;
//            f[i][j] = max(w[i] - f[i + 1][j], w[j] - f[i][j - 1]);
//        }
//
//    }
//    int sum = 0, d = f[0][n - 1];
//    for (int i = 0; i < n; ++i) {
//        sum += w[i];
//    }
//    printf("%d %d", (sum + d) / 2, (sum - d) / 2);
//    return 0;
//}