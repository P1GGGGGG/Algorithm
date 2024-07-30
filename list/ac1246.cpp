//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int n, gap = 0, cnt;
//int a[N];
//
//int gcd(int a, int b) {
//    return b ? gcd(b, a % b) : a;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//    }
//    sort(a, a + n + 1);
//    for (int i = 1; i <= n; ++i) {
//        gap = gcd(gap, a[i] - a[1]);
//    }
//    if (gap == 0) cnt = n;
//    else cnt = (a[n] - a[1]) / gap + 1;
//    cout << cnt << endl;
//    return 0;
//}