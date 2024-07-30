//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int primes[N], cnt;
//bool st[N];
//
//void init(int n) {
//    for (int i = 2; i <= n; ++i) {
//        if (!st[i])primes[cnt++] = i;
//        for (int j = 0; primes[j] * i <= n; ++j) {
//            st[primes[j] * i] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//
//int main() {
//    init(N);
//    int n;
//    while (cin >> n) {
//        cout << primes[n - 1] << endl;
//    }
//    return 0;
//}