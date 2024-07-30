//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 5010;
//string s;
//int a[N];
//int ans;
//
//int main() {
//    cin >> s;
//    int n = s.length();
//    for (int i = 0; i < n; ++i) {
//        if (s[i] == '0') {
//            a[i] = 0;
//            continue;
//        }
//        a[i] = s[i] - '0';
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            if (a[i] < a[j])continue;
//            if (a[i] > a[j]) {
//                ans++;
//                continue;
//            }
//            int l = i, r = j;
//            while (l < r) {
//                if (a[l] < a[r])break;
//                if (a[l] > a[r]) {
//                    ans++;
//                    break;
//                }
//                l++, r--;
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}