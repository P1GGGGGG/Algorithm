//#include <iostream>
//using namespace std;
//
//int quick_M(int a,int b,int p)
//{
//    long long res = 1;
//    while(b)
//    {
//        if(b%2) res = res*a%p;
//        b/=2;
//        a = (long long)a*a%p;
//    }
//    return res;
//}
//
//int main()
//{
//    // 请在此输入您的代码
//    int a,b,n;
//    cin >> a >> b >> n;
//    a%=b;//防止接下俩的运算a过大爆ll，先取余，因为商并不影响小数
//    //int num[3];
//    a *= quick_M(10,n-1,b);//快速幂,a/b的小数第一位就是(10*a)/b的商，所以a/b的小数第n-1位就是(10^n-1*a)/b,快速幂先算出10^（n-1）%b然后再乘以a
//    a%=b; //防止a>b，快速幂的结果肯定是小于b的，但是又乘了一个a，这就会让第n-1位的小数运算结果影响第n位的小数
//    for(int i=0;i<3;i++)
//    {
//        a*=10;
//        cout << a/b;
//        a%=b;
//    }
//    return 0;
//}