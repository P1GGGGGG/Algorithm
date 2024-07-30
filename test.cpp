//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e5 + 10;
//typedef pair<int, int> PII;
//int n, m;
//set<PII> s1, s2; //s1 反  s2  正
//
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; ++i) {
//        int x, y;
//        cin >> x >> y;
//        // 反斜线
//        if (x == y) {
//            s1.insert({1, 1});
//        } else if (x > y) {
//            int gap = y - 1;
//            int tmpx = x - gap;
//            s1.insert({tmpx, 1});
//        } else {
//            int gap = x - 1;
//            int tmpy = y - gap;
//            s1.insert({1, tmpy});
//        }
//        //正斜线
//        if (x + y == n + 1) {
//            s2.insert({n, 1});
//        } else if (x + y < n + 1) {
//            int gap = x - 1;
//            int tmpy = y + gap;
//            s2.insert({1, tmpy});
//        } else {
//            int gap = n - y;
//            int tmpx = x - gap;
//            s2.insert({tmpx, 5});
//        }
//    }
//    cout << s1.size() <<' '<< s2.size() << endl;
//    return 0;
//}