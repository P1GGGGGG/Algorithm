//#include<bits/stdc++.h>
//using namespace std;
//bool m[15];
//int hf[15],qk=0,f=0,p[15];
//bool check(){
//    if(hf[1]+hf[5]+hf[9]==15&&hf[3]+hf[5]+hf[7]==15)
//        if(hf[1]+hf[2]+hf[3]==15&&hf[4]+hf[5]+hf[6]==15&&hf[7]+hf[8]+hf[9]==15)
//            if(hf[1]+hf[4]+hf[7]==15&&hf[2]+hf[5]+hf[8]==15&&hf[3]+hf[6]+hf[9]==15)
//                return true;
//    return false;
//}
//void dfs(int x){
//    if(x>9){
//        if(check())qk++;
//        if(qk==1&&f==0){f=1;for(int i=1;i<10;i++)p[i]=hf[i];}
//        return;
//    }
//    if(hf[x]==0)
//        for(int i=1;i<10;i++){
//            if(m[i]==false){
//                m[i]=true;
//                hf[x]=i;
//                dfs(x+1);
//                m[i]=false;
//                hf[x]=0;
//            }
//        }
//    else dfs(x+1);
//}
//int main(){
//    for(int i=1;i<10;i++)cin >> hf[i];
//    hf[5]=5;
//    for(int i=1;i<10;i++){
//        if(hf[i]!=0)m[hf[i]]=true;}
//    dfs(1);
//    if(qk==1){
//        for(int i=1;i<10;i++){
//            cout << p[i] << " ";
//            if(i%3==0)cout << endl;
//        }
//    }
//}