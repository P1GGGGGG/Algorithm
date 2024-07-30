//#include "bits/stdc++.h"
//
//using namespace std;
//const int N = 1000010;
//int n;
//char S[N], T[N];
//int ans, flag;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> T >> S;
//        int len = strlen(S);
//        ans = 0;
//        if (S[0] != T[0] || S[len - 1] != T[len - 1]) {
//            cout << "-1" << endl;
//            continue;
//        }
//        for (int j = 1; j < len - 1; ++j) {
//            if (S[j] != T[j]) {
//                if (S[j - 1] == T[j] && S[j + 1] == T[j]) {
//                    S[j] = T[j];
//                    ans++;
//                } else {
//                    ans=-1;
//                    break;
//                }
//            }
//        }
//        cout << ans << endl;
//    }
//
//    return 0;
//}