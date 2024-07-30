//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 10000 + 10;
//
//int n;
//int path[N];
//
//int min(int a, int b, int c) {
//    if (a <= b && a <= c) return a;
//    if (b <= a && b <= c) return b;
//    if (c <= a && c <= b) return c;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        if (i == 1 || i == 2 || i == 3) {
//            path[i] = 1;
//        } else {
//            path[i] = min(path[i - 1], path[i - 2], path[i - 3]) + 1;
//        }
//    }
//    cout<<path[n]<<endl;
//    return 0;
//}