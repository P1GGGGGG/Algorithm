//#include <bits/stdc++.h>
//using namespace std;
//map<string,int> m;
//string str;
//int game(){
//    if(m.count(str)!=0)    return m[str];       //记忆化搜索
//    if(str.find("LOL") != -1)  return -1;    //当我方填写已出现LOL时，我方必输
//    else if(str.find("*") == -1)  return 0;  //当没有出现LOL且没有空格时，则为平局
//    int flag=-1;
//    for(int i = 0 ; i < str.length();i++){
//        if(str[i] == '*'){
//            str[i] = 'L';                     //第一种 先试着填 L
//            int res = game();                 //对方走，判断局面胜负
//            str[i] = '*';                     //恢复局面
//            if(res == -1)  return m[str] = 1; //如果对方必输，则我方赢
//            else if(res == 0)  flag=0;           //如果对方追平，则先保存结果
//
//            str[i] = 'O';                    //第二种 再试着填 O
//            res = game();                    //对方走，判断局面胜负
//            str[i] = '*';                     //恢复局面
//            if(res == -1) return m[str] = 1; //如果对方必输，则我方赢
//            else if(res == 0)  flag=0;          //如果对方追平，则先保存结果
//        }
//    }
//    return m[str] = flag;
//}
//int main(){
//    int n,index=0,ans[15];
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>str;
//        ans[index++]=game();
//    }
//    for(int i=0;i<index;i++){
//        cout<<ans[i]<<endl;
//    }
//    return 0;
//}