//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//typedef long long LL;
//typedef pair<int, int> PII;
//PII a[N];
//int n, len;
//
//bool check(LL x) {
//    vector<PII> segs;
//    for (int i = 0; i < n; ++i) {
//        int l = a[i].first, s = a[i].second;
//        if (s > x)continue;
//        int left = max((LL) 1, l - x + s), right = min((LL) len, l + x - s);
//        segs.push_back({left, right});
//    }
//    sort(segs.begin(), segs.end());
//    if (segs.empty()) return false;
//    if (segs[0].first > 1) return false;
//    int dr = segs[0].second;
//    for (int i = 1; i < segs.size(); ++i) {
//        if (segs[i].first > dr + 1) return false;
//        dr = max(dr, segs[i].second);
//    }
//    return dr == len;
//}
//
//int main() {
//    cin >> n >> len;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i].first >> a[i].second;   //first : li second : si;
//    }
//    LL l = 1, r = 2e9;
//    while (l < r) {
//        LL mid = (l + r) >> 1;
//        if (check(mid))r = mid;
//        else l = mid + 1;
//    }
//    cout << l << endl;
//    return 0;
//}