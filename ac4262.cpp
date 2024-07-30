//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int n;
//int b[N];
//
//int main() {
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
//    for (int i = 1; i <= n; i++) {
//        int x;
//        scanf("%d", &x);
//        b[i] -= x;
//    }
//    for (int i = n + 1; i; i--) b[i] -= b[i - 1];
//    int res1 = 0, res2 = 0;
//    for (int i = 1; i <= n; i++)
//        if (b[i] > 0)res1 += b[i];
//        else res2 -= b[i];
//
//    printf("%d\n", max(res1, res2));
//    return 0;
//}
