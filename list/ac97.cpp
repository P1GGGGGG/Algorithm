//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//const int mod = 9901;
//int a, b;
//int ans = 1;
//
//int qmi(int a, int k) {
//    int res = 1;
//    a %= mod;
//    while (k) {
//        if (k & 1) res = res * a % mod;
//        a = a * a % mod;
//        k >>= 1;
//    }
//    return res;
//}
//
//int sum(int x, int s) {
//    return ((qmi(x, s) - 1) / (x - 1));
//}
//
//int main() {
//    cin >> a >> b;
//    for (int i = 2; i <= a; ++i) {
//        int s = 0;
//        while (a % i == 0) {
//            s += 1;
//            a /= i;
//        }
//        if (s != 0)ans = ans * sum(i, s * b + 1) % mod;
//    }
//    if (a == 0)ans = 0;
//    cout << ans << endl;
//    return 0;
//}