//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 110;
//typedef long long ll;
//
//ll a[N], b[N], x[N];
//int n;
//
//ll gcd(ll a, ll b) {
//    return b ? gcd(b, a % b) : a;
//}
//
//ll gcd_sub(ll a, ll b) {
//    if (a < b)swap(a, b);
//    if (b == 1)return a;
//    return gcd_sub(b, a / b);
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> x[i];
//    }
//    sort(x, x + n);
//    int cnt = 0;
//    for (int i = 1; i < n; ++i) {
//        if (x[i] != x[i - 1]) {
//            ll d = gcd(x[i], x[0]);
//            a[cnt] = x[i] / d;
//            b[cnt] = x[0] / d;
//            cnt++;
//        }
//    }
//    ll up = a[0], down = b[0];
//    for (int i = 1; i < cnt; ++i) {
//        up = gcd_sub(up, a[i]);
//        down = gcd_sub(b[i], down);
//    }
//    cout << up << "/" << down << endl;
//    return 0;
//}