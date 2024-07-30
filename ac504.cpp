//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//int qmi(int a, int b, int p) {
//    int res = 1 % p;
//    while (b) {
//        if (b & 1) res = (LL) res * a % p;
//        a = (LL) a * a % p;
//        b >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    int n, m, k, x;
//    cin >> n >> m >> k >> x;
//
//    cout << (qmi(10, k, n) * m + x) % n;
//
//    return 0;
//}
