//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//#include <queue>
//
//using namespace std;
//
//string bfs(string state) {
//    queue<string> q;
//    unordered_map<string, string> d;
//
//    q.push(state);
//    d[state] = "";
//
//    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
//    char step[4] = {'u', 'l', 'd', 'r'};
//    string end = "12345678x";
//    while (q.size()) {
//        auto t = q.front();
//        q.pop();
//
//        if (t == end) return d[t];
//
//        string path = d[t];
//        int k = t.find('x');
//        int x = k / 3, y = k % 3;
//        for (int i = 0; i < 4; i++) {
//            int a = x + dx[i], b = y + dy[i];
//            if (a >= 0 && a < 3 && b >= 0 && b < 3) {
//                swap(t[a * 3 + b], t[k]);
//                if (!d.count(t)) {
//                    d[t] = path + step[i];
//                    q.push(t);
//                }
//                swap(t[a * 3 + b], t[k]);
//            }
//        }
//    }
//
//    return "unsolvable";
//}
//
//int main() {
//    string state;
//    for (int i = 0; i < 9; i++) {
//        char c;
//        cin >> c;
//        state += c;
//    }
//
//    cout << bfs(state) << endl;
//
//    return 0;
//}
//
