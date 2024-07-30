//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//string toans(ll n,ll e){
//    //十进制转化成任意进制
//    if(n==0) return "0";
//    string str;
//    while(n){
//        int tm=n%e;
//        if(tm<=9){
//            str+='0'+tm;
//        }else{
//            str+='A'+tm-10;
//        }
//        n/=e;
//    }
//    reverse(str.begin(),str.end());
//    return str;
//}
//ll toten(string str,int ne){
//    //任意进制转化成十进制
//    ll ans=0,args=1;
//    for(int i=str.size()-1;i>=0;i--){
//        if(str[i]<='9'){
//            ans+=(str[i]-'0')*args;
//        }else{
//            ans+=(str[i]-'A'+10)*args;
//        }
//        args*=ne;
//    }
//    return ans;
//}
//ll getop(ll a,ll b,string op){
//    if(op=="ADD")return a+b;
//    else if(op=="SUB")return a-b;
//    else if(op=="MUL") return a*b;
//    else if(op=="DIV")return a/b;
//    else return a%b;
//}
//int main()
//{
//    int n;cin>>n;
//    ll ans=0;int ne=10;
//    string str,op;
//    while(n--){
//        cin>>str;
//        if(str=="CLEAR"){
//            str.clear();
//            op.clear();
//        }else if(str=="EQUAL"){
//            op.clear();
//            cout<<toans(ans,ne)<<endl;
//        }else if(str=="CHANGE"){
//            cin>>ne;
//        }else if(str=="NUM"&&op.empty()){
//            cin>>str;
//            ans=toten(str,ne);
//        }else if(str=="NUM"&&!op.empty()){
//            cin>>str;
//            ans=getop(ans,toten(str,ne),op);
//        }else op=str;
//    }
//    return 0;
//}