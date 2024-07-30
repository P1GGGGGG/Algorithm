//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int n, l, r, m;
//int c[N];
//
//bool check(int mid) {
//    int num = 0, tmp = 0;
//    for (int i = 0; i < n; ++i) {
//        if (c[i] >= mid)num++;
//        else if (c[i] == mid - 1)tmp++;
//    }
//    return num + min(tmp, m) >= mid;
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> c[i];
//    }
//    sort(c, c + n);
//    l = 0, r = n;
//    while (l < r) {
//        int mid = (l + r + 1) >> 1;
//        if (check(mid))l = mid;
//        else r = mid - 1;
//    }
//    cout << l << endl;
//    return 0;
//}