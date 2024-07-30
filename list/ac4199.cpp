//#include<bits/stdc++.h>
//
//using namespace std;
//
//int a, b, q, l, r;
//vector<int> aa;
//
//int gcd(int a, int b) {
//    return b ? gcd(b, a % b) : a;
//}
//
//void get(int n) {
//    for (int i = 1; i <= n / i; ++i) {
//        if (n % i == 0) {
//            aa.push_back(i);
//            if (i != n / i)aa.push_back(n / i);
//        }
//    }
//}
//
//
//int main() {
//    cin >> a >> b >> q;
//    int d = gcd(a, b);
//    get(d);
//    sort(aa.begin(), aa.end());
//    while (q--) {
//        scanf("%d%d", &l, &r);
//        int t = 0, t1 = aa.size() - 1;
//        while (t < t1) {
//            int mid = t + t1 + 1 >> 1;
//            if (aa[mid] <= r)t = mid;
//            else t1 = mid - 1;
//        }
//        if (aa[t] >= l && aa[t] <= r)printf("%d\n", aa[t]);
//        else puts("-1");
//    }
//    return 0;
//}