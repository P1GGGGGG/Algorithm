//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 35;
//typedef long long ll;
//
//int n, m;
//int w[N][2];
//int ans=1e9;
//
//void dfs(int cur, ll a,int cnt) {
//    if (a>m)return;
//    if (cur > n) {
//        if (a ==m) {
//
//            if(cnt<ans)ans=cnt;
//        }
//        return;
//    }
//    dfs(cur + 1, a + w[cur][1],cnt);
//    dfs(cur + 1, a,cnt);
//    dfs(cur + 1, a + w[cur][0],cnt+1);
//
//}
//
//int main() {
//    cin >> n >> m;
//    m*=2;
//    for (int i = 0; i < n; ++i) {
//        cin >> w[i][0];
//        w[i][1] = w[i][0] * 2;
//    }
//    dfs(0, 0,0);
//    if (ans==1e9)cout<<-1<<endl;
//    else cout << ans << endl;
//
//    return 0;
//}