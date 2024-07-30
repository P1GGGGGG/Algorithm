//#include<iostream>
//using namespace std;
//const int N = 2010;
//int b[N][N];
//int n, m;
//
//void insert(int x1, int y1, int x2, int y2)
//{
//    b[x1][y1] ++;
//    b[x1][y2 + 1] --;
//    b[x2 + 1][y1] --;
//    b[x2 + 1][y2 + 1] ++;
//}
//
//int main()
//{
//    scanf("%d%d", &n, &m);
//
//    while(m --)
//    {
//        int x1, y1, x2, y2;
//        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//
//        insert(x1, y1, x2, y2);
//    }
//
//    for(int i = 1; i <= n; i ++)
//        for(int j = 1; j <= n; j ++)
//            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
//
//    for(int i = 1; i <= n; i ++)
//    {
//        for(int j = 1; j <= n; j ++)
//        {
//            if(b[i][j] % 2 == 0) printf("0");
//            else printf("1");
//        }
//
//        puts("");
//    }
//
//    return 0;
//}
