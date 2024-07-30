//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 5e4 + 5;
//typedef long long ll;
//
//bool st[N];
//struct Circle {
//    int x, y, r;
//} cir[N], a;
//int n, m;
//int ans;
//
//bool check(Circle a, Circle b) {
//    if (a.r * a.r >= abs(a.x - b.x) * abs(a.x - b.x) + abs(a.y - b.y) * abs(a.y - b.y))return true;
//    return false;
//}
//
//void dfs(Circle a1) {
//    for (int i = 0; i < n; ++i) {
//        if (!st[i]) {
//            if (check(a1, cir[i])) {
//                st[i] = true;
//                ans++;
//                dfs(cir[i]);
//            }
//        }
//    }
//    return;
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> cir[i].x >> cir[i].y >> cir[i].r;
//    }
//    while (m--) {
//        cin >> a.x >> a.y >> a.r;
//        dfs(a);
//    }
//    cout << ans << endl;
//    return 0;
//}