//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() // 暴力。
//{
//    int n, a, b, c, d, flag = 0;
//    while (cin >> n) {
//        flag = 0;
//        int temp = sqrt(n) + 1;
//
//        for (a = 0; a <= temp; a++) {
//            if (a * a > n) break;
//            for (b = a; b <= temp; b++) { //
//                if (a * a + b * b > n) break;
//                for (c = b; c <= temp; c++) {
//                    if (a * a + b * b + c * c > n) break;
//                    int d = sqrt(n - a * a - b * b - c * c);
//                    if (d * d + a * a + b * b + c * c == n && d >= c) {
//                        cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
//                        flag = 1;
//                    }
//                    if (flag)break;
//                }
//                if (flag)break;
//            }
//            if (flag)break;
//        }
//    }
//}
//
