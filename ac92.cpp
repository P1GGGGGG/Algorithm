//#include "bits/stdc++.h"
//
//using namespace std;
//const int N = 16;
//int n;
//int st[N];  //0没有考虑，1选，2不选
//void dfs(int p) {  //p当前位置，q是当前最大选取个数
//    if(p>n){
//        for(int i=1;i<=n;i++){
//            if(st[i]==1){
//                printf("%d ",i);
//            }
//        }
//        puts("");
//        return;
//    }
//
//
//    st[p]=1;
//    dfs(p + 1);
//    st[p]=0;
//
//    st[p]=2;
//    dfs(p + 1);
//    st[p]=0;
//}
//
//int main() {
//    cin >> n;
//    dfs(1);
//    return 0;
//}