//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 1e4 + 10;
//int n;
//int mx = 1e9 + 1;
//int a[N], b[N];
//
//bool check(int mid) {
//    bool flag = true;
//    for (int i = 0; i < n; ++i) {
//        if (a[i] / mid != b[i]) {
//            flag = false;
//            break;
//        }
//    }
//    return flag;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i] >> b[i];
//        mx = min(mx, a[i] / b[i]);
//    }
//    int l = 1, r = mx;
//    while (l < r) {
//        int mid = l + r >> 1;
//        if (check(mid))r = mid;
//        else l = mid + 1;
//    }
//    cout << l << ' ' << mx;
//    return 0;
//}