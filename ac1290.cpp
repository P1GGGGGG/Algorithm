//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//
//int p = 100003;
//ll n, m;
//
//int qmi(int n, ll m, int p) {
//    int res = 1;
//    while (m) {
//        if (m & 1)res = (ll) res * n % p;
//        n = (ll) n * n % p;
//        m >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    cin >> m >> n;
//    cout << (qmi(m, n, p) - m * qmi(m - 1, n - 1, p) % p + p) % p;
//    return 0;
//}