//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e2 + 10;
//int flag[N];
//string s;
//int ans;
//
//int dfs(int i) {
//    int cnt = 0, last = 0;
//    for (int j = i; j < s.length(); ++j) {
//        if (flag[j] == 0) {
//            flag[j] = 1;
//            if (s[j] == '(')cnt += dfs(i + 1);
//            else if (s[j] == ')') {
//                return max(last, cnt);
//            } else if (s[j] == 'x') {
//                cnt++;
//            } else if (s[j] == '|') {
//                last = max(last, cnt);
//                cnt = 0;
//            }
//        }
//    }
//    return max(cnt, last);
//}
//
//int main() {
//    cin >> s;
//    ans = dfs(0);
//    cout << ans << endl;
//    return 0;
//}