//#include "bits/stdc++.h"
//using namespace std;
//
//const int N=1e5+10;
//typedef pair<int,int> PII;
//int n,k,d;
//PII a[N];
//int cnt[N];
//int st[N];
//
//bool cmp(PII a,PII b){
//    return a.first<b.first;
//}
//int main(){
//    cin>>n>>d>>k;
//    for (int i = 0; i < n; ++i) {
//        int ts,id;
//        cin>>ts>>id;
//        a[i]=make_pair(ts,id);
//    }
//    sort(a,a+n,cmp);
//    for (int i = 0,j=0; i < n; ++i) {
//        while (a[i].first-a[j].first>=d){
//            cnt[a[j].second]--;
//            j++;
//        }
//        cnt[a[i].second]++;
//        if(cnt[a[i].second]>=k)st[a[i].second]=1;
//    }
//    for (int i = 0; i < 100000; ++i) {
//        if (st[i]==1){
//            cout<<i<<endl;
//        }
//    }
//    return 0;
//}