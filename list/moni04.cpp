//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 1001;
//
//char g[N][N], ans[N][N];
//int l[N][N], r[N][N], d[N][N];
//
//int n, m, max1 = -1;
//int dx[3] = {-1, -1, 1}, dy[3] = {-1, 1, 0};
//
//int min(int a, int b, int c) {
//    if (a <= b && a <= c) return a;
//    if (b <= a && b <= c) return b;
//    if (c <= a && c <= b) return c;
//}
//
//void print(int a[][N]){
//    for(int i=1;i<=n;i++){
//        for (int j = 1; j <= m; ++j) {
//            printf("%d ",a[i][j]);
//        }
//        puts("");
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> g[i][j];
//        }
//    }
//    for (int i = 2; i <= n - 1; ++i) {
//        for (int j = 2; j <= m - 1; ++j) {
//            if(g[i][j] == g[i-1][j-1]){
//                l[i][j] = l[i-1][j-1] + 1;
//            }
//            if(g[i][j] == g[i-1][j+1]){
//                r[i][j] = r[i-1][j+1] + 1;
//            }
//        }
//    }
//    for(int i=n-1;i;i--){
//        for(int j=1;j<=m;j++){
//            if(g[i][j]==g[i+1][j]){
//                d[i][j]=d[i+1][j]+1;
//            }
//        }
//    }
//
//    for (int i = 2; i <= n - 1; ++i) {
//        for (int j = 2; j <= m - 1; ++j) {
//            ans[i][j] = min(l[i][j], r[i][j], d[i][j]);
//        }
//    }
//    for (int i = 2; i <= n - 1; ++i) {
//        for (int j = 2; j <= m - 1; ++j) {
//            if (ans[i][j] > max1)max1 = ans[i][j];
//        }
//    }
//
//    cout << max1 << endl;
//    return 0;
//}