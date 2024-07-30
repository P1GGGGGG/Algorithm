//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 1000000 + 10;
//const int mod = 1000000007;
//int n, a, b, c;
//int path[N];
//
//int main() {
//    cin >> n >> a >> b >> c;
//    path[0]=1;
//    for (int i = 1; i <= n; ++i) {
//        if(i-a>=0)path[i]=(path[i-a]+path[i])%mod;
//        if(i-b>=0)path[i]=(path[i-b]+path[i])%mod;
//        if(i-c>=0)path[i]=(path[i-c]+path[i])%mod;
//    }
//    cout<<path[n];
//    return 0;
//}