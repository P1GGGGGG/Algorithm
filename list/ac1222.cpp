//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1020;
//string a,b;
//int dp[N][N];
//
//int main() {
//    cin>>a;
//    b=a;
//    reverse(b.begin(),b.end());
//    int n=a.length();
//    a=" "+a;
//    b=" "+b;
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//            if (a[i] == b[j])dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
//        }
//    }
//    cout<<n-dp[n][n];
//    return 0;
//}