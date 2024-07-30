//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+5;
//struct line{
//    int x;
//    int y;
//    int v;
//}l[N];
//int n,X,Y;
//int f[N];
//vector<pair<int,int>> shadow;
//bool cmp(line a,line b){
//    return a.y>b.y;
//}
//
//int find(int x) {
//    while (x != f[x]) {
//        x = f[x] = f[f[x]];
//    }
//    return x;
//}
//int ans;
//
//
//int main(){
//    cin>>n>>X>>Y;
//    for (int i = 0; i < n; ++i) {
//        cin>>l[i].x>>l[i].y>>l[i].v;
//    }
//    sort(l,l+n,cmp); //y从大到小排列
//    double lmax=Y-l[0].y/,rmax,l,r;
//    ans=1;
//    for (int i = 0; i < n; ++i) {
//
//    }
//    return 0;
//}
