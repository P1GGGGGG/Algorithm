//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N=100010;
//
//int a[N],id,n;
//LL ans=-1e5,s[N];
//
//int main()
//{
//    cin>>n;
//    for(int i=1;i<=n;i++)cin>>a[i];
//    for(int i=1;i<=n;i++)s[i]=s[i-1]+a[i];
//
//    for(int i=2,j=1,depth=1;j<=n;j=i,i*=2,depth++)
//    {
//        i=min(i,n+1);//防止越界
//        if(ans<s[i-1]-s[j-1])
//        {
//            ans=s[i-1]-s[j-1];
//            id=depth;
//        }
//    }
//    cout<<id<<endl;
//
//    return 0;
//}