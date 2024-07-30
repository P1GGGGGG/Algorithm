//#include<bits/stdc++.h>
//
//using namespace std;
//#define mod 998244353
//
//const int N = 100000 + 10;
//
//int n;
//int a[N], b[N];
//int t[N];
//
//int main() {
//    cin >> n;
//    for (int i = 1; i < n; ++i) {
//        cin >> a[i] >> b[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        double p = a[i] / b[i];
//        t[i] = (int) ((p * t[i] - p + 1) / (1 - p)) % mod;
//    }
//    cout << t[n];
//    return 0;
//}