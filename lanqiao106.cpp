//#include <bits/stdc++.h>
//
//using namespace std;
//
//string s;
//int k;
//
//int dfs() {
//    int ans = 0;
//    while (k < s.size()) {
//        if (s[k] == '(') {
//            k++;
//            ans += dfs();
//            k++;
//        } else if (s[k] == '|') {
//            k++;
//            ans = max(ans, dfs());
//        } else if (s[k] == 'x') {
//            k++;
//            ans++;
//        } else break;
//    }
//    return ans;
//}
//
//
//int main() {
//    cin >> s;
//    cout << dfs();
//    return 0;
//}
