//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//int qmi(int a, int b, int p)
//{
//    int res = 1 % p;
//    while (b)
//    {
//        if (b & 1) res = (LL)res * a % p;
//        a = (LL)a * a % p;
//        b >>= 1;
//    }
//    return res;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    while (n -- )
//    {
//        int a, b, p;
//        scanf("%d%d%d", &a, &b, &p);
//        printf("%d\n", qmi(a, b, p));
//    }
//
//    return 0;
//}
