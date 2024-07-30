//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e8 + 10;
//
//bool st[N];
//int primes[N], cnt;
//int l, r;
//
//void init(int n) {
//    for (int i = 2; i <= n; i++) {
//        if (!st[i])primes[cnt++] = i;
//        for (int j = 0; primes[j] * i <= n && j < cnt; j++) {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//
//bool check(int x) {
//    if (x < l || x > r)return false;
//    int tmp = 0, old = x;
//    while (x) {
//        tmp = tmp * 10 + x % 10;
//        x /= 10;
//    }
//    if (tmp == old)return true;
//    else return false;
//}
//
//int main() {
//    cin >> l >> r;
//    init(r);
//    for (int i = 0; i < cnt; ++i) {
//        if (check(primes[i]))cout << primes[i] << endl;
//    }
//    return 0;
//}