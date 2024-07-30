//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 32002;
//
//int n;
//int a, b, tr[N], ans[N];
//
//int lowbit(int x) {
//    return x & -x;
//}
//
//void add(int x, int i) {
//    for (int j = x; j <= 32001; j += lowbit(j)) {
//        tr[j] += i;
//    }
//}
//
//int query(int x) {
//    int res = 0;
//    for (int i = x; i > 0; i -= lowbit(i)) {
//        res += tr[i];
//    }
//    return res;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a >> b;
//        a++;
//        ans[query(a)]++;
//        add(a, 1);
//    }
//    for (int i = 0; i < n; ++i) {
//        cout << ans[i] << endl;
//    }
//    return 0;
//}