//#include<bits/stdc++.h>
//
//using namespace std;
//
//typedef pair<int, int> PII;
//const int N = 5e3 + 10;
//PII seg[N];
//int n;
//int mx1, mx2;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> seg[i].first >> seg[i].second;
//    }
//    sort(seg, seg + n);
//    int l = seg[0].first, r = seg[0].second;
//    for (int i = 1; i < n; ++i) {
//        if (seg[i].first <= r)r = max(seg[i].second, r);
//        else {
//            mx1 = max(mx1, r - l);
//            mx2 = max(mx2, seg[i].first - r);
//            l = seg[i].first, r = seg[i].second;
//        }
//    }
//    mx1 = max(mx1, r - l);
//    cout << mx1 << ' ' << mx2;
//    return 0;
//}