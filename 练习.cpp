//#include<iostream>
//using namespace std;
//const int N = 110;
//int a[N][N];//关系表 如：a[u][v]=1，表示第u个人与第v个人认识
//int p[N][N];//考场状态，p[j][k]=y:表示第j个考场的第k个座位，坐第y个人
//int num = N;//最优考场数量
//int n, m;
//void dfs(int x, int room)//试试把第x个人安排到第1到room考场
//{
//    if (room >= num)return;
//    if (x > n)//已经安排了n个人，结束
//    {
//        num = min(num, room);//更新最优解
//        return;
//    }
//    int j, k;
//    for (j = 1; j <= room; j++)//枚举考场,把第x个人放入第j个考场里
//    {
//        k = 1;
//        while (p[j][k] && !a[x][p[j][k]])//表示j考场第k个位置有人坐并且二者并不认识
//            k++;//第x个人去做下一个位置
//        if (p[j][k] == 0)//如果没人坐
//        {
//            p[j][k] = x;//让x坐在这里
//            dfs(x + 1, room);//继续去安排下一个人
//            p[j][k] = 0;//回溯，释放这个座位
//        }
//    }
//    //如果安排不了，就再加一个考场
//    p[room + 1][1] = x;
//    dfs(x + 1, room + 1);//继续去安排下一个人
//    p[room + 1][1] = 0;//回溯
//}
//int main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < m; i++)
//    {
//        int u, v;
//        scanf("%d%d", &u, &v);
//        a[u][v] =a[v][u]= 1;
//    }
//    dfs(1, 1);
//    printf("%d", num);
//    return 0;
//}