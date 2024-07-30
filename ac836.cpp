//#include<bits/stdc++.h>
//using namespace std;
//
//const int N=1e5+10;
//
//int n,m;
//int p[N];
//
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    return p[x];
//}
//
//int main(){
//    cin>>n>>m;
//    for (int i = 0; i < n; ++i) {
//        p[i]=i;
//    }
//    while(m--){
//        int a,b;
//        char op[2];
//        scanf("%s%d%d",op,&a,&b);
//        if (op[0]=='M'){
//            p[find(a)]=find(b);
//        }else{
//            if (find(a)== find(b)){
//                puts("Yes");
//            }else puts("No");
//        }
//    }
//    return 0;
//}