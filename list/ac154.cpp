//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//const int N = 1000010;
//int a[N];
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    for (int i = 1; i <= n; i ++ ) cin >> a[i];
//    deque<int> q;
//    for(int i = 1; i <= n; i++)
//    {
//        while(q.size() && q.back() > a[i])
//            q.pop_back();
//        q.push_back(a[i]);
//        if(i - k >= 1 && q.front() == a[i - k])
//            q.pop_front();
//        if(i >= k)
//            cout << q.front() <<" ";
//    }
//    q.clear();
//    cout << endl;
//
//    for(int i = 1; i <= n; i++)
//    {
//        while(q.size() && q.back() < a[i]) q.pop_back();
//        q.push_back(a[i]);
//        if(i - k >= 1 && a[i - k] == q.front()) q.pop_front();
//        if(i >= k) cout << q.front() << " ";
//
//    }
//}
