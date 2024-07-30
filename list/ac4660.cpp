//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//const ll mod = 998244353;
//
//int main () {
//    ll n; cin >> n;
//    ll ans = 1;
//    //计算 阶乘除以2
//    for(int i = 3; i <= n; i++) {//从3开始是因为在这一步直接将2除掉了， 避免除法
//        ans = (ans * i) % mod;
//    }
//    //乘以C(2, n)
//    ans = (ans * ((n * (n - 1) / 2) % mod)) % mod;
//    cout << ans << endl;
//    return 0;
//}
