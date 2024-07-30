//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 2e5 + 10;
//#define M 998244353
//
//
//int s[N];
//int n, m;
//int ans;
//
//void dfs(int i) {
//    if (i > n) {
//        (ans %= M)++;
////        for (int j = 1; j <= n; ++j) {
////            cout << a[j] << ' ';
////        }
////        puts("");
//        return;
//    }
//    //枚举当前数位可能得数字
//    for (int j = 0 + i % 2; j < 10; j += 2) {
//        if (i > 2) {
//            s[i] = s[i - 2] + j; //前缀和
//        } else {
//            s[i] = j;
//        }
//        int sum;
//        if (i > 5) {
//            sum = s[i] + s[i - 1] - s[i - 6] - s[i - 5];
//        } else {
//            sum = s[i] + s[i - 1];
//        }
//        if (sum <= m) {
//            dfs(i + 1);
//        } else {
//            return; //最小的数都会爆，后续也会爆
//        }
//    }
//}
//
//
//int main() {
//    cin >> n >> m;
//    dfs(1);
//    cout<<ans<<endl;
//    return 0;
//}