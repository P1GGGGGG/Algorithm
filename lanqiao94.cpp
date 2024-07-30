//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 101;
//
//int a[N], n, st[N];
//int ans = -1;
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        memset(st, 0, sizeof st);
//        int now = i, cnt = 1, tmp = 0, num = 0;
//        while (cnt <= n) {
//            if (now == n + 1)now = 1;
//            if (st[now] == 1) {
//                now++;
//                continue;
//            }
//            if (cnt == a[now]) {
//                st[now] = 1;
//                tmp += cnt;
//                now++;
//                cnt = 1;
//                num++;
//                if (num == n)break;
//            } else {
//                cnt++;
//                now++;
//            }
//        }
//        ans = max(ans, tmp);
//    }
//    cout << ans << endl;
//    return 0;
//}