//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n;
//
//int main() {
//    cin >> n;
//    for (int k = 1; k <= n; ++k) {
//        int m;
//        cin >> m;
//        int res = 1;
//        for (int i = 2; i <= m; ++i) {
//            int x = i, num = i, s;
//            for (int j = 2; j * j <= x; ++j) {
//                s = 0;
//                if (x % j == 0) {
//                    while (x % j == 0) {
//                        x /= j;
//                    }
//                    s = 1;
//                }
//                if (s == 1) {
//                    num = num / j * (j - 1);
//                }
//            }
//            if (x > 1)num = num / x * (x - 1);
//            res += num;
//        }
//        cout << k << ' ' << m << ' ' << 2 * res + 1 << endl;
//    }
//    return 0;
//}