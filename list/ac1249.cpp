//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 20010;
//int n, m;
//int p[N];
//
//int find(int x) {
//    while (p[x] != x) {
//        x = p[x];
//    }
//    return p[x];
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; ++i) {
//        p[i] = i;
//    }
//    while (m--) {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        p[find(a)] = find(b);
//    }
//    cin >> m;
//    while (m--) {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        if (find(a) == find(b)) {
//            puts("Yes");
//        } else puts("No");
//    }
//    return 0;
//}