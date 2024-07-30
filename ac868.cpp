//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//bool st[N];
//int primes[N], cnt, ans;
//
//void init(int n) {
//    for (int i = 2; i <= n; ++i) {
//        if (!st[i])primes[cnt++] = i;
//        for (int j = 0; primes[j] * i <= n && j < cnt; ++j) {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//
//int main() {
//    int n;
//    cin >> n;
//    init(n);
//    for (int i = 0; i < cnt; ++i) {
//        if (primes[i] <= n)ans++;
//        else break;
//    }
//    cout << ans << endl;
//    return 0;
//}