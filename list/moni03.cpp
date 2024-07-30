//#include "bits/stdc++.h"
//using namespace std;
//
//const int N=1e3+10;
//
//int a[N];
//int n,max1=10001,min1=-1;
//
//int main(){
//    cin>>n;
//    for (int i = 1; i <= n; ++i) {
//        cin>>a[i];
//    }
//    for (int i = 1; i <= n-1; ++i) {
//        if (a[i]>a[i-1]&&a[i]>a[i+1]){
//            if (a[i]<max1) max1=a[i];
//        }
//        if (a[i]<a[i-1]&&a[i]<a[i+1]){
//            if (a[i]>min1) min1=a[i];
//        }
//    }
//    cout<<min1<<' '<<max1<<endl;
//    return 0;
//}