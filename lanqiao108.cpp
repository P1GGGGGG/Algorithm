//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 2e5 + 10;
//
//int e[N], h[N], ne[N], idx;
//int d[N];
//
//void add(int a, int b) {
//    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//int main() {
//    memset(h, -1, sizeof h);
//    int n, a, b;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a >> b;
//        d[a]++, d[b]++;
//        add(a, b);
//        add(b, a);
//    }
//    queue<int> q;
//    for (int i = 1; i <= n; ++i) {
//        if (d[i] == 1)q.push(i);
//    }
//    while (!q.empty()) {
//        int x = q.front();
//        q.pop();
//        for (int i = h[x]; i != -1; i = ne[i]) {
//            int j = e[i];
//            d[j]--;
//            if (d[j] == 1) q.push(j);
//        }
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (d[i] > 1) cout << i << ' ';
//    }
//}