//#include "bits/stdc++.h"
//
//using namespace std;
//const int N = 10;
//int n;
//int st[N];  //0没有考虑，1选，2不选
//map<int,int>used;
//void dfs(int p) {  //p当前位置，q是当前最大选取个数
//    if(p>n){
//        for(int i=1;i<=n;i++){
//            printf("%d ",st[i]);
//        }
//        puts("");
//        return;
//    }
//    if(st[p]==0){
//        for (int i = 1; i <= n; ++i) {
//            if(used[i]);
//            else{
//                st[p]=i;
//                used[i]=1;
//                dfs(p+1);
//                used[st[p]]=0;
//                st[p]=0;
//            }
//        }
//    }
//
//}
//
//int main() {
//    cin >> n;
//    dfs(1);
//    return 0;
//}