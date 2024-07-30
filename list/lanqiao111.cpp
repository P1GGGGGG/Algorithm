//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e4 + 1;
//typedef pair<int, int> PII;
//int n;
//PII a[N];
//
//bool check(double x) {
//    double last_r = 0;
//    for (int i = 0; i < n; ++i) {
//        double gap = abs(last_r - a[i].first);
//        if (gap - x > 1e-6)gap = x;
//        if (a[i].first - last_r < 1e-6) {
//            last_r = a[i].second + gap;
//        } else {
//            last_r = a[i].second - gap;
//        }
//    }
//    if (last_r < 1e4)return false;
//    return true;
//}
//
//bool cmp(PII a, PII b) {
//    return a.second < b.second;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i].first >> a[i].second;
//    }
//    sort(a, a + n, cmp);
//    double l = 0, r = 1e4;
//    double mid;
//    while (r - l > 1e-6) {
//        mid = (r + l) / 2;
//        if (check(mid))r = mid;
//        else l = mid;
//    }
//    cout<<mid<<endl;
//    double ans = round(mid * 10.0) / 10.0;
//    if (ans - floor(ans * 1) < 1e-6)cout << int(ans) << endl;
//    else cout << ans << endl;
//    return 0;
//}