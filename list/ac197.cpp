//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 1e6 + 10;
//typedef pair<int, int> PII;
//int n;
//map<int, int> m;
//int primes[N], cnt;
//bool st[N];
//
//// TLE版
//void solve1() {
//    cin >> n;
//    for (int i = 2; i <= n; ++i) {
//        int x = i, s;
//        for (int j = 2; j * j <= x; ++j) {
//            s = 0;
//            if (x % j == 0) {
//                while (x % j == 0) {
//                    x /= j;
//                    s++;
//                }
//            }
//            if (s != 0) {
//                m[j] += s;
//            }
//        }
//        if (x > 1)m[x] += 1;
//    }
//    for (int i = 2; i <= n; ++i) {
//        if (m[i] != 0)cout << i << ' ' << m[i] << endl;
//    }
//}
//
////正解版
//
//void init(int n) {
//    for (int i = 2; i <= n; ++i) {
//        if (!st[i])primes[cnt++] = i;
//        for (int j = 0; primes[j] * i <= n; ++j) {
//            st[i * primes[j]] = true;
//            if (i % primes[j] == 0)break;
//        }
//    }
//}
//
//void solve2() {
//    int n;
//    cin >> n;
//    init(n);
//    for (int i = 0; i < cnt; ++i) {
//        int p = primes[i];
//        int s = 0;
//        for (int j = n; j; j /= p)s += j / p;
//        cout << p << ' ' << s << endl;
//    }
//}
//
//int main() {
//    //solve1();
//    solve2();
//    return 0;
//}