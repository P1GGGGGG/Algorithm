//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1e6 + 5;
//#define int long long
//int n, m;
//int room[N];
//int z[N];
//int d[N], x[N], y[N];
//bool check(int mid){
//    memset(z,0,sizeof z);
//    for(int i=1;i<=mid;i++){
//        z[x[i]]+=d[i];
//        z[y[i]+1]-=d[i];
//    }
//    for(int i=1;i<=n;i++){
//        z[i]+=z[i-1];
//        if(z[i]>room[i])return 0;
//    }
//    return 1;
//}
//signed main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> room[i];
//    }
//    for(int i=1;i<=m;i++){
//        scanf("%lld %lld %lld",&d[i],&x[i],&y[i]);
//    }
//    int l = 1, r = m;
//    while(l < r){
//        int mid = l + r >> 1;
//        if(check(mid))l = mid + 1;
//        else r = mid;
//    }
//    if(check(l))puts("0");
//    else cout<<"-1"<<endl<<l;
//    return 0;
//}