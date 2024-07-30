//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 21, M = N * N * N;
//
//int A, B, C;
//struct Node {
//    int a, b, c;
//} q[M];
//bool st[N][N][N];
//
//void bfs() {
////    int hh = 0, tt = 0;
////    q[0] = {0, 0, C};
////    st[0][0][C] = true;
////    int W[3] = {A, B, C};
////
////    while (hh <= tt)
////    {
////        auto t = q[hh ++ ];
////        for (int i = 0; i < 3; i ++ )
////            for (int j = 0; j < 3; j ++ )
////                if (i != j)  // 从桶i往桶j中倒
////                {
////                    int w[3] = {t.a, t.b, t.c};
////                    int r = min(w[i], W[j] - w[j]);
////                    w[i] -= r, w[j] += r;
////                    int a = w[0], b = w[1], c = w[2];
////                    if (!st[a][b][c])
////                    {
////                        st[a][b][c] = true;
////                        q[ ++ tt] = {a, b, c};
////                    }
////                }
////    }
//    int hh = 0, tt = 0;
//    st[0][0][C] = true;
//    q[0] = {0, 0, C};
//    int W[3] = {A, B, C};
//    while (hh <= tt) {
//        Node t = q[hh++];
//        int o[3] = {t.a, t.b, t.c};
//        int v[3];
//        for (int i = 0; i < 3; ++i) {
//            for (int j = 0; j < 3; ++j) {
//                if (i != j) {
//                    memcpy(v, o, sizeof o);
//                    if (v[i] <= W[j] - v[j]) {
//                        v[j] += v[i], v[i] = 0;
//                    } else {
//                        v[i] -= W[j] - v[j], v[j] = W[j];
//                    }
//                    if (!st[v[0]][v[1]][v[2]]) {
//                        st[v[0]][v[1]][v[2]] = true;
//                        q[++tt] = {v[0], v[1], v[2]};
//                    }
//                }
//            }
//        }
//    }
//}
//
//
//int main() {
//    scanf("%d%d%d", &A, &B, &C);
//    bfs();
//
//    for (int c = 0; c <= C; c++)
//        for (int b = 0; b <= B; b++)
//            if (st[0][b][c]) {
//                printf("%d ", c);
//                break;
//            }
//
//    return 0;
//}
