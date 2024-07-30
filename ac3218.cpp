//#include<bits/stdc++.h>
//
//using namespace std;
//
//int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//int m1=1;
//
//int main() {
//    int y, d;
//    cin >> y >> d;
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)month_days[2] += 1;
//    int i = 1;
//    while (d > month_days[i]) {
//        m1++;
//        d -= month_days[i++];
//    }
//    cout << m1 << endl;
//    cout << d << endl;
//    return 0;
//}