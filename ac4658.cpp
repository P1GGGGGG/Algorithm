//#include<iostream>
//
//using namespace std;
//
//typedef long long ll;
//ll ans=0, n;
//
//int main() {
//    cin >> n;
//    for (ll i = 2; i <= n / i; ++i) {
//        if (n % i == 0) {
//            ans++;
//            while (n % i == 0)n /= i;
//        }
//    }
//    if (n > 1)ans++;
//    cout << ans;
//    return 0;
//}