//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//int n, m;
//int p[N];
//int s[N];
//
//int find(int a) {
//    if (a != p[a])p[a] = find(p[a]);
//    return p[a];
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        p[i] = i;
//        s[i] = 1;
//    }
//    while (m--) {
//        string op;
//        cin >> op;
//        if (op == "C") {
//            int a, b;
//            cin >> a >> b;
//            if (find(a) != find(b)) {
//                s[find(b)] += s[find(a)];
//                p[find(a)] = find(b);
//            }
//        } else if (op == "Q1") {
//            int a, b;
//            cin >> a >> b;
//            if (find(a) == find(b))cout << "Yes" << endl;
//            else cout << "No" << endl;
//        } else if (op == "Q2") {
//            int a;
//            cin >> a;
//            cout << s[find(a)] << endl;
//        }
//    }
//    return 0;
//}
