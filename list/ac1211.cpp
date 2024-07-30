//#include "bits/stdc++.h"
//using namespace std;
//
//#define N 50
//int n;
//int dist[N];
//int st[N];
//int ans;
//int main(){
//    cin>>n;
//    for (int i = 0; i < n; ++i) {
//        cin>>dist[i];
//    }
//    st[0]=1;
//
//    int num=n;
//    while(n){
//        for (int i = 0; i <num; ++i) {
//            if (dist[i]<=0){
//                dist[i]--;
//            }else dist[i]++;
//            if (dist[i]==0||dist[i]==100){
//                n--;
//            }
//        }
//        for (int i = 0; i < num; ++i) {
//            for (int j = i+1; j < num; ++j) {
//                if (dist[i]+dist[j]==0){
//                    dist[i]=0-dist[i];
//                    dist[j]=0-dist[j];
//                    if (st[i]==1||st[j]==1){
//                        st[i]=1;
//                        st[j]=1;
//                    }
//                }
//            }
//        }
//    }
//    for (int i = 0; i < num; ++i) {
//        if (st[i]){
//            ans++;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}