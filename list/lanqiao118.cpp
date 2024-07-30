//#include<iostream>
//#include<bitset>
//#include<cmath>
//using namespace std;
//
//
//int n, m;
//
//bool check(int now, int num){
//    int num_a = 0, num_b = 0;
//
//    for(int i = num ; i >= 1 ; i--){//i是层数也是机器人个数
//        //bitset类可以用.count()方法可快速求出二进制下1的个数
//        //创建了一个32位的bitset， 初始化值为 now
//        bitset<32>bs = now;
//        num_b += bs.count();//now里面有多少1
//        num_a += i - bs.count();//now里面有多少0
//        //下面开始求上一层的now
//        now ^= now >> 1;
//        now &= (1 << (i - 1)) - 1;
//    }
//    return num_a == m && num_b == n;
//}
//
//int main(){
//    cin >> m >> n;
//    //num是层数
//    //利用double转int类型向下取整得性质，由(num + 1) * (num) / 2 == n + m 推导得
//    int num = sqrt((n + m) * 2);
//
//    int ans = 0;
//    for(int i = 0 ; i < (1 << num) ; i++){//num层的最下层是num个机器人，摆法有2的num次方种，每一种可以转化为数字i
//        if(check(i,num))ans++;
//    }
//    cout << ans << endl;
//}