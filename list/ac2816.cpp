//#include<bits/stdc++.h>
//
//using namespace std;
//const int N = 1e5 + 10;
//int n, m, flag;
//int a[N], b[N];
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < m; ++i) {
//        cin >> b[i];
//    }
//    for (int i = 0, j = 0; i < n && j < m; j++) {
//        if (a[i] == b[j]) {
//            i++;
//            if (i == n)flag = 1;
//        }
//    }
//    if (flag)cout << "Yes" << endl;
//    else cout << "No" << endl;
//    return 0;
//}