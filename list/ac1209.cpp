//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 10;
//
//int target;
//int num[N];
//
//int calc(int l, int r) {
//    int res = 0;
//    for (int i = l; i <= r; i++) {
//        res = res * 10 + num[i];
//    }
//    return res;
//}
//
//int main() {
//    cin >> target;
//    for (int i = 0; i < 9; i++) {
//        num[i] = i + 1;
//    }
//    int res = 0;
//    do {
//        for (int i = 0; i < 9; i++) {
//            for (int j = i + 1; j < 9; j++) {
//                int a = calc(0, i);
//                int b = calc(i + 1, j);
//                int c = calc(j + 1, 8);
//                if (a == 0 || b == 0 || c == 0) {
//                    continue;
//                }
//                if (a * c + b == c * target) {
//                    ++res;
//                }
//            }
//        }
//        // 调用函数生成全排列
//    } while (next_permutation(num, num + 9));
//    cout << res << '\n';
//    return 0;
//}
