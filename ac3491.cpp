//#include<bits/stdc++.h>
//
//using namespace std;
//#define int long long
//int n;
//int ans = 1;
//
//signed main() {
//    cin >> n;
//    for (int i = 2; i * i <= n; ++i) {
//        int s = 0;
//        if (n % i == 0) {
//            while(n%i==0){
//                n /= i;
//                s++;
//            }
//        }
//        if (s % 2 != 0) {
//            ans *= i;
//        }
//    }
//    if (n > 1)ans *= n;
//    cout << ans << endl;
//    return 0;
//}