//#include <bits/stdc++.h>
//
//using namespace std;
//
//string s1, s2;
//int len;
//int d[6] = {-3, -2, -1, 1, 2, 3};
//map<string, int> m;
//
//int bfs() {
//    queue<string> q;
//    q.push(s1);
//    m[s1] = 0;
//    while (q.size()) {
//        string t = q.front();
//        q.pop();
//        int cnt = m[t];
//        int x = t.find('*');
//        for (int i = 0; i < 6; i++) {
//            int z = x + d[i];
//            if (z >= 0 && z < len) {
//                swap(t[z], t[x]);
//                if (!m[t]) {
//                    m[t] = cnt + 1;
//                    if (t == s2) {
//                        return m[t];
//                    }
//                    q.push(t);
//                }
//                swap(t[z], t[x]);
//            }
//        }
//    }
//}
//
//int main() {
//    // 请在此输入您的代码
//    cin >> s1 >> s2;
//    len = s1.length();
//    cout << bfs() << endl;
//    return 0;
//}