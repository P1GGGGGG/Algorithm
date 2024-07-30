//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 5;
//
//int n, k;
//int h[N], w[N];
//
//bool check(int x) {
//    int num = 0;
//    for (int i = 0; i < n; ++i) {
//        if (h[i] < x || w[i] < x)continue;
//        else {
//            int nx = h[i] / x, ny = w[i] / x;
//            num += nx * ny;
//        }
//    }
//    if (num >= k)return true;
//    return false;
//}
//
//int main() {
//    cin >> n >> k;
//    for (int i = 0; i < n; ++i) {
//        cin >> h[i] >> w[i];
//    }
//    int l = 1, r = 1e5;
//    while (l < r) {
//        int mid = l + r + 1 >> 1;
//        if (check(mid))l = mid;
//        else r = mid - 1;
//    }
//    cout << l << endl;
//    return 0;
//}