//#include<bits/stdc++.h>
//
//using namespace std;
//typedef pair<int, int> PII;
//const int N = 105;
//int n, m, res;
//PII a[N];
//
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < m; ++i) {
//        cin >> a[i].first >> a[i].second;
//    }
//    sort(a, a + m);
//    int l = 0, r = -1;
//    for (int i = 0; i < m; ++i) {
//        if (a[i].first > r) {
//            res += r - l + 1;
//            r = a[i].second, l = a[i].first;
//        } else {
//            r = max(r, a[i].second);
//        }
//    }
//    res += r - l + 1;
//    cout << n + 1 - res;
//    return 0;
//}