//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//#define x first
//#define y second
//
//using namespace std;
//const int N = 1e5 + 10;
//typedef pair<int, int> PII;
//
//priority_queue<PII,vector<PII>,less<>> heap;
//
//int a[N], b[N];
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for(int i = 1; i <= n; i ++)
//    {
//        cin >> a[i] >> b[i];
//        heap.push({a[i], i});
//    }
//    int ans = 0;
//    for(int i = 1; i <= m; i ++)
//    {
//        ans += heap.top().x;
//        int id = heap.top().y;
//        heap.pop();
//        a[id] -= b[id];
//        heap.push({a[id], id});
//    }
//    cout << ans << endl;
//    return 0;
//}
//#include<bits/stdc++.h>
//
//using namespace std;
//priority_queue<int, vector<int>, less<>> q1;
//int n, m;
//int c;
//
//int main() {
//    cin >> n >> m;
//    while (n--) {
//        int a, b;
//        cin >> a >> b;
//        while (a > 0) {
//            q1.push(a);
//            a -= b;
//        }
//    }
//    while (m-- && !q1.empty()) {
//        c += q1.top();
//        q1.pop();
//    }
//    cout << c << endl;
//    return 0;
//}