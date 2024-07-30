//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1010;
//
//int n, h, r;
//struct Sphere
//{
//    int x, y, z;
//}q[N];
//int p[N];
//
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//
//    while (T -- )
//    {
//        scanf("%d%d%d", &n, &h, &r);
//        for (int i = 0; i <= n + 1; i ++ ) p[i] = i;
//
//        for (int i = 1; i <= n; i ++ )
//        {
//            int x, y, z;
//            scanf("%d%d%d", &x, &y, &z);
//            q[i] = {x, y, z};
//
//            if (abs(z) <= r) p[find(i)] = find(0);
//            if (abs(z - h) <= r) p[find(i)] = find(n + 1);
//        }
//
//        for (int i = 1; i <= n; i ++ )
//            for (int j = 1; j < i; j ++ )
//            {
//                LL dx = q[i].x - q[j].x;
//                LL dy = q[i].y - q[j].y;
//                LL dz = q[i].z - q[j].z;
//
//                if (dx * dx + dy * dy + dz * dz <= 4 * (LL)r * r)
//                    p[find(i)] = find(j);
//            }
//
//        if (find(0) == find(n + 1)) puts("Yes");
//        else puts("No");
//    }
//
//    return 0;
//}
