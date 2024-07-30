//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 2e5 + 10;
//
//#define int long long
//struct po {
//    int x;
//    int y;
//    int v;
//    int i;
//} a[N];
//
//int get_type(int x, int y){
//    if((x == 0 && y > 0))return 3;
//    if(x>0)return 2;
//    if(x==0 && y < 0)return 1;
//    return -1;
//}
//struct CMP{
//    bool operator()(const po& a,const po& b){
//        int aa = get_type(a.x, a.y);
//        int bb = get_type(b.x, b.y);
//        if (aa!=bb) {
//            return aa>bb;
//        }
//        if(aa==3)return a.y<b.y;
//        if(aa==2){
//            if (a.y * b.x != b.y * a.x){
//                return a.y * b.x > b.y * a.x;
//            }
//            return a.y < b.y;
//        }else{
//            if (a.y * b.x != b.y * a.x){
//                return a.y * b.x < b.y * a.x;
//            }
//            return a.y > b.y;
//        }
//    }
//};
//int n, l;
//int ans[N];
//
//
//signed main() {
//    cin >> n >> l;
//    set<po, CMP>s;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i].x >> a[i].y >> a[i].v;
//        a[i].i = i;
//        s.insert(a[i]);
//    }
//    memset(ans, -1, sizeof ans);
//
//    int now_x = 0, now_y = l, last_x = 0, last_y = 0;
//    int t = 0;
//    set<po, CMP>::iterator it = s.lower_bound({now_x, now_y, 0});
//    for(auto it2 = s.begin(); it2!=s.end();it2++){
//        if(it2->x==0){
//            if(now_y > 0){
//                if(now_y > it2->y){
//
//                }
//            }
//        }
//    }
//    while(s.size()) {
//
//        if (it == s.end()){
//            it = s.begin();
//        }
//        int this_x = (*it).x, this_y = (*it).y;
//        if(this_x * this_x + this_y * this_y <= l * l){
//            int full = last_x && (this_x * last_y == last_x * this_y) && (last_x * last_x + last_y * last_y <= l * l);
//            l += (*it).v;
//            if(!full){
//                t++;
//            }
//            ans[it->i] = t;
//            last_x = this_x;
//            last_y = this_y;
//            s.erase(it);
//            it = s.lower_bound({now_x, now_y, 0});
//        }else{
//            it++;
//        }
//
//
//    }
//    for(int i=0;i<n;i++){
//        cout<<ans[i]<<" ";
//    }
//    return 0;
//}