//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//const long long mod = 998244353;
//ll a, b;
//
//ll qmi(ll a, ll b) {
//    ll res = 1;
//    while (b) {
//        if (b & 1) res = res * a % mod;
//        a = a * a % mod;
//        b >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    cin >> a >> b;
//    if (a == 1) {
//        cout << 0 << endl;
//        return 0;
//    }
//    ll ans = a, x = a;
//    for (int i = 2; i * i <= x; ++i) {
//        if (x % i == 0) {
//            while (x % i == 0) {
//                x /= i;
//            }
//            ans = ans / i * (i - 1) % mod;
//        }
//    }
//    if (x > 1)ans = ans / x * (x - 1) % mod;
//    cout << ans * qmi(a, b - 1) % mod << endl;
//    return 0;
//}