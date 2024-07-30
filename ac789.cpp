//#include "bits/stdc++.h"
//using namespace std;
//
//#define N 100010
//int n,q,k;
//int a[N];
//int bbegin,eend;
//
//int main(){
//    cin>>n>>q;
//    for (int i = 0; i < n; ++i) {
//        cin>>a[i];
//    }
//    while (q--){
//        cin>>k;
//        int l=0,r=n-1;
//        while(l<r){
//            int mid=l+r>>1;
//            if(a[mid]>=k)r=mid;
//            else l=mid+1;
//        }
//        if(a[r]==k){
//            bbegin=r;
//            l=0,r=n-1;
//            while(l<r){
//                int mid=l+r+1>>1;
//                if(a[mid]<=k)l=mid;
//                else r=mid-1;
//            }
//            eend=l;
//            cout<<bbegin<<' '<<eend<<endl;
//        }else cout<<"-1 -1"<<endl;
//    }
//    return 0;
//}
