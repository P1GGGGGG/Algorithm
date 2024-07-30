//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 1e5 + 10;
//int n;
//map<int, int> m;
//int a[N];
//int ans, tmp;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0, j = 0; i < n && j < n; ++i) {
//        m[a[i]] += 1;
//        tmp++;
//        if (m[a[i]] > 1) {
//            while (m[a[i]] > 1) {
//                m[a[j++]] -= 1;
//            }
//            tmp = i - j + 1;
//        }
//        ans = max(ans, tmp);
//    }
//    cout << ans << endl;
//    return 0;
//}