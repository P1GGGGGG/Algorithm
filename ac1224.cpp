//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N=1e6+10;
//
//int n;
//int st[N];
//int ans;
//
//int main(){
//    cin>>n;
//    for (int i = 1; i <= n; ++i) {
//        cin>>st[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        while(st[i]!=i){
//            swap(st[i],st[st[i]]);
//            ans++;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}