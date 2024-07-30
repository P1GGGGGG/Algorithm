//#include<cstring>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 10, M = 1 << N;
//
//int n;
//int h[N], d[N], l[N];
//bool st[N];
//
//bool dfs(int u, int time)
//{
//    if (u >= n) return true;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (!st[i])
//        {
//            if (time > h[i] + d[i]) return false;
//            else
//            {
//                st[i] = true;
//                if (time < h[i])
//                {
//                    if(dfs(u + 1, h[i] + l[i])) return true;
//                }
//                else if(dfs(u + 1, time + l[i])) return true;
//                st[i] = false;
//            }
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        cin >> n;
//        for (int i = 0; i < n; i++) scanf("%d%d%d", &h[i], &d[i], &l[i]);
//
//        memset(st, 0, sizeof st);
//        if (dfs(0, 0)) printf("YES\n");
//        else printf("NO\n");
//    }
//
//    return 0;
//}
