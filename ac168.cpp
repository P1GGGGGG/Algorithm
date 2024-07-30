//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//const int N = 24, INF = 1e9;
//
//int n, m;
//int minv[N], mins[N];
//int res = INF;
//
////记录每层的半径和高，因为会用到上一层的高度
//int R[N], H[N];
//
////u当前层次，v当前处理的体积和，s当前处理的面积和
//void dfs(int u, int v, int s) {
//    if (v + minv[u] > n) return;
//    if (s + mins[u] >= res) return;
//    if (s + 2 * (n - v) / R[u + 1] >= res) return;
//
//    if (!u) {
//        if (v == n) res = s;
//        return;
//    }
//
//    //搜索顺序，先R后H，从大到小
//    for (int r = min(R[u + 1] - 1, (int) sqrt((n - v - minv[u - 1]) / u)); r >= u; r--)
//        for (int h = min(H[u + 1] - 1, (n - v - minv[u - 1]) / r / r); h >= u; h--) {
//            H[u] = h, R[u] = r;
//
//            //最底层的时候需要加上r*r
//            int t = u == m ? r * r : 0;
//
//            dfs(u - 1, v + r * r * h, s + 2 * r * h + t);
//        }
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++) {
//        minv[i] = minv[i - 1] + i * i * i;
//        mins[i] = mins[i - 1] + 2 * i * i;
//    }
//
//    //m+1层不存在，作为哨兵，减少边界情况的判断
//    R[m + 1] = H[m + 1] = INF;
//
//    dfs(m, 0, 0);
//
//    if (res == INF) res = 0;
//    cout << res << endl;
//
//
//    return 0;
//}
