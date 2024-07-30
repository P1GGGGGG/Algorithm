//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//ll qmi(ll n, ll m, ll p) {
//    ll res = 1;
//    while (m) {
//        if (m & 1)res = (res * n) % p;
//        n = (n * n) % p;
//        m >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        ll a, b, c, gap, k;
//        scanf("%lld%lld%lld", &a, &b, &c);
//        scanf("%lld", &k);
//        if (c - b == b - a) {
//            gap = c - b;
//            ll ans = (a + gap * (k - 1)) % 200907;
//            printf("%lld\n", ans);
//        } else {
//            gap = b / a;
//            ll ans = qmi(gap, k - 1, 200907);
//            ans = ans * a % 200907;
//            printf("%lld\n", ans);
//        }
//    }
//
//    return 0;
//}