//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 5e5 + 10;
//
//int p[N], d[N];
//int n, m;
//
////d数组记录该节点到root节点的距离，p数组记录该节点的祖先节点；
//
//int find(int x) {
//    if (p[x] != x) {
//        int rx = find(p[x]);
//        d[x] += d[p[x]];
//        p[x] = rx;
//    }
//    return p[x];
//}
//
//int main() {
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; ++i) {
//        p[i] = i;
//    }
//    int res = 0;
//    while (m--) {
//        int t, x, y;
//        scanf("%d%d%d", &t, &x, &y);
//        if (x > n || y > n)res++;
//        else {
//            int px = find(x), py = find(y);
//            if (t == 1) {
//                if (px == py && (d[x] - d[y]) % 3)res++;
//                else if (px != py) {
//                    p[px] = py;
//                    d[px] = d[y] - d[x];
//                }
//            } else {
//                if (px == py && (d[x] - d[y] - 1) % 3)res++;
//                else if (px != py) {
//                    p[px] = py;
//                    d[px] = d[y] + 1 - d[x];
//                }
//            }
//        }
//    }
//    cout << res << endl;
//    return 0;
//}