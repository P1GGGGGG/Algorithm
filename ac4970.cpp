//#include "bits/stdc++.h"
//
//using namespace std;
//const int N = 100010;
//int n;
//int A[N];
//vector<int> primes;
//bool isprimes[N];
//int p[N];
//
//void linear_sieve(int n){
//    for (int i = 2; i < n; ++i) {
//        if (isprimes[i]){
//            primes.push_back(i);
//        }
//        for (int j = 0; j < primes.size()&&i*primes[j]<=n; ++j) {
//            isprimes[i*primes[j]]=false;
//            if (i%primes[j]==0){
//                break;
//            }
//        }
//    }
//}
//
//int find(int x){
//    if(p[x]!=x)p[x]=find(p[x]);
//    return p[x];
//}
//
//void join(int x,int y){
//    int fx= find(x),fy= find(y);
//    if (fx!=fy){
//        p[fx]=fy;
//    }
//}
//
//
//
//int main() {
//    linear_sieve(1e6);
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> A[i];
//    }
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            int flag= gcd(A[i],A[j]);
//            if (flag!=1){
//                cout<<i+1<<" "<<j+1<<endl;
//                return 0;
//            }
//        }
//    }
//    return 0;
//}