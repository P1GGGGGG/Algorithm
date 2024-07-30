//#include <iostream>
//
//using namespace std;
//
//int const N = 100010;
//int w[N], h[N];//存储长、宽
//int n, k;
//
//bool check(int a) {
//    int num = 0;
//    for (int i = 0; i < n; ++i) {
//        num += (w[i] / a) * (h[i] / a);
//        if (num >= k)return true;
//
//    }
//    return false;
//}
//
//int main() {
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) cin >> h[i] >> w[i];
//    int l = 1, r = 1e5;//小巧克力数量边长一定在 1 -- 100000 之间
//    while (l < r)//二分小巧克力边长范围，找到符合要求的最大值
//    {
//        int mid = l + r + 1 >> 1;
//        if (check(mid))l = mid;
//        else r = mid - 1;
//    }
//    cout << l;
//}
