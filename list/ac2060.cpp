//#include<iostream>
//#include<cstring>
//#include<string>
//#include<vector>
//#include<cstdio>
//#define x first
//#define y second
//using namespace std;
//
//typedef long long LL;
//typedef pair<int,int> PII ;
//
//const int N = 55;
//int n, m;
//char g[N][N];
//vector<PII> points[2];//存储两个点集 连通块1和连通块2
//int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};//偏移量
//
//void dfs(int a, int b, vector<PII>& q){
//
//    q.push_back({a, b});
//    g[a][b] = '.';//在点集合中抠出这个点
//    //用这个点去dfs其他的点
//
//    for (int i = 0; i < 4; i ++ )
//    {
//        int x = a + dx[i], y = b + dy[i];
//        if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 'X')//防止出界
//            dfs(x, y, q);
//    }
//
//}
//
//int main()
//{
//    scanf("%d%d", &n, &m);
//    //这里是一次读入一行
//    for (int i = 0; i < n; i ++ ) scanf("%s", g[i]);//二维数组本质是一维数组的嵌套
//
//
//    int k=0;//点集的下标
//
//    //找到一个X 然后不断dfs扩充连通块
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(g[i][j]=='X'){
//                dfs(i,j,points[k++]);//对第几个连通块进行扩充
//            }
//
//        }
//    }
//
//    int res=110; //最大值是长和高的和 100 位于对角出
//
//    // 用一个点集中的点去匹配另一个点集中的点
//    for (auto& a: points[0])
//        for (auto& b: points[1])
//            res = min(res, abs(a.x - b.x) + abs(a.y - b.y));
//
//    //res求出来的是距离
//    //间隔数需要-1
//    // (1,3) 与 （1，5)连接起来只需要1个
//
//    printf("%d\n",res-1);
//
//    return 0;
//
//}
//
