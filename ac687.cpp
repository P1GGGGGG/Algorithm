//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 310;
//
//int n;
//char str[N][N];
//int g[N][N];
//
//void dfs(int a, int b) {
//    int t = g[a][b];
//    g[a][b] = -1;
//    if (t) return;
//
//    for (int x = a - 1; x <= a + 1; x++)
//        for (int y = b - 1; y <= b + 1; y++)
//            if (x >= 0 && x < n && y >= 0 && y < n && g[x][y] != -1)
//                dfs(x, y);
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    for (int cases = 1; cases <= T; cases++) {
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++) scanf("%s", str[i]);
//
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//                if (str[i][j] == '*') g[i][j] = -1;
//                else {
//                    g[i][j] = 0;
//                    for (int x = i - 1; x <= i + 1; x++)
//                        for (int y = j - 1; y <= j + 1; y++)
//                            if (x >= 0 && x < n && y >= 0 && y < n && str[x][y] == '*')
//                                g[i][j]++;
//                }
//
//        int res = 0;
//
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//                if (!g[i][j]) {
//                    res++;
//                    dfs(i, j);
//                }
//
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//                if (g[i][j] != -1)
//                    res++;
//
//        printf("Case #%d: %d\n", cases, res);
//    }
//
//    return 0;
//}
