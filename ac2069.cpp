//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e4 + 10;
//int n, m;
//int p[N];
//int s[N];
//
//int find(int x) {
//    if (x != p[x])p[x] = find(p[x]);
//    return p[x];
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        p[i] = i;
//    }
//    while (m--) {
//        int op, a, b;
//        cin >> op >> a >> b;
//        if (op == 1) {
//            a = find(a), b = find(b);
//            if (a != b) {
//                p[a] = b;
//            }
//        } else {
//            for (int i = 1; i <= n; ++i) {
//                if (find(i) == find(a)) {
//                    s[i] += b;
//                }
//            }
//        }
//    }
//    for (int i = 1; i <= n; ++i) {
//        cout << s[i] << ' ';
//    }
//    return 0;
//}