//#include<bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//const int N = 1010;
//int n, a[N];
//int phi[N];
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//        phi[i] = 1;
//    }
//    for (int i = 0; i < n; ++i) {
//        int m = a[i];
//        int x = m, s;
//        for (int j = 2; j * j <= x; ++j) {
//            s = 0;
//            if (x % j == 0) {
//                while (x % j == 0) {
//                    x /= j;
//                    s++;
//                }
//            }
//            if (s != 0) {
//                phi[i] *= s + 1;
//            }
//        }
//        if (x > 1) phi[i] *= 2;
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << phi[i] << endl;
//    }
//    return 0;
//}