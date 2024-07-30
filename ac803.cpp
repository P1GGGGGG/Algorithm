//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//typedef pair<int, int> PII;
//
//PII seg[N];
//int n;
//unordered_map<int, int> m1;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> seg[i].first >> seg[i].second;
//    }
//    sort(seg, seg + n);
//    int l = seg[0].first, r = seg[0].second;
//    m1[l] = 1;
//    for (int i = 1; i < n; ++i) {
//        if (seg[i].first <= r) {
//            r = max(r, seg[i].second);
//        } else {
//            l = seg[i].first, r = seg[i].second;
//        }
//        m1[l] = 1;
//    }
//
////    for (unordered_map<int, int>::iterator it = m1.begin(); it != m1.end(); it++) {
////        cout << it->first << ' ' << it->second << endl;
////    }
//    cout << m1.size() << endl;
//    return 0;
//}