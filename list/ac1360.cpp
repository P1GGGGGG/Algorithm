//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//
//void dfs(int a, int b, int c, int d)
//{
//    if (a + c > n) return;
//
//    dfs(a, b, a + c, b + d);
//    printf("%d/%d\n", b + d, a + c);
//    dfs(a + c, b + d, c, d);
//}
//
//int main()
//{
//    scanf("%d", &n);
//
//    puts("0/1");
//    dfs(1, 0, 1, 1);
//    puts("1/1");
//
//    return 0;
//}
