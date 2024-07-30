//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//const int N = 1e5 + 10;
//
//int n, m;
//int a[N], s[N];
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//    }
//    cin >> m;
//    while (m--) {
//        int l, r;
//        cin >> l >> r;
//        s[l]++, s[r + 1]--;
//    }
//    for (int i = 1; i <= n; ++i) {
//        s[i] =  s[i - 1] + s[i];
//    }
//    ll sum1 = 0, sum2 = 0;
//    for (int i = 1; i <= n; ++i) {
//        sum1 += (ll)s[i] * a[i];
//    }
//    sort(s + 1, s + n + 1);
//    sort(a + 1, a + n + 1);
//    for (int i = 1; i <= n; ++i) {
//        sum2 += (ll) s[i] * a[i];
//    }
//    cout << sum2 - sum1 << endl;
//    return 0;
//}