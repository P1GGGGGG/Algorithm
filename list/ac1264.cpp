//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n, m;
//int tr[N], t[N];
//
//int lowbit(int x) {
//    return x & -x;
//}
//
//void add(int x, int j) {
//    for (int i = x; i <= 1e5 + 2; i += lowbit(i)) {
//        tr[i] += j;
//    }
//}
//
//int query(int x) {
//    int res = 0;
//    for (int j = x; j > 0; j -= lowbit(j)) {
//        res += tr[j];
//    }
//    return res;
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> t[i];
//        add(i, t[i]);
//    }
//    while (m--) {
//        int k, a, b;
//        cin >> k >> a >> b;
//        if (k == 0) {
//            cout << query(b) - query(a - 1) << endl;
//        } else {
//            add(a, b);
//        }
//    }
//    return 0;
//}