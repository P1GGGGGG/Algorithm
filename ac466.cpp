//#include<bits/stdc++.h>
//
//using namespace std;
//
//int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//bool check_valid(int date)
//{
//    int year = date / 10000;
//    int month = date % 10000 / 100;
//    int day = date % 100;
//
//    if (month == 0 || month > 12) return false;
//    if (day == 0 || month != 2 && day > days[month]) return false;
//
//    if (month == 2)
//    {
//        int leap = year % 100 && year % 4 == 0 || year % 400 == 0;
//        if (day > 28 + leap) return false;
//    }
//    return true;
//}
//
//int main()
//{
//    int date1, date2;
//    cin >> date1 >> date2;
//
//    int res = 0;
//    for (int i = 1000; i < 10000; i ++ )
//    {
//        int date = i, x = i;
//        for (int j = 0; j < 4; j ++ ) date = date * 10 + x % 10, x /= 10;
//
//        if (date1 <= date && date <= date2 && check_valid(date)) res ++ ;
//    }
//
//    cout << res << endl;
//
//    return 0;
//}
