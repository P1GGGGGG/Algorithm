//#include<bits/stdc++.h>
//
//using namespace std;
//
//int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//bool is_leap(int y) {
//    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return true;
//    return false;
//}
//
//int get_total_days(int y, int m, int d) {
//    int ans = 0;
//    for (int i = 1; i < y; ++i) {
//        if (is_leap(i))ans += 366;
//        else ans += 365;
//    }
//    for (int i = 1; i < m; ++i) {
//        ans += month_days[i];
//        if (i == 2)
//            if (is_leap(y))ans += 1;
//    }
//    ans += d;
//    return ans;
//}
//
//int main() {
//    int y1, m1, d1, y2, m2, d2;
//    while (scanf("%04d%02d%02d", &y1, &m1, &d1) != EOF) {
//        scanf("%04d%02d%02d", &y2, &m2, &d2);
//        printf("%d\n", abs(get_total_days(y1, m1, d1) - get_total_days(y2, m2, d2)) + 1);
//        getchar();
//    }
//    return 0;
//}