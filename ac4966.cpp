//#include <bits/stdc++.h>
//
//using namespace std;
//
//string s;
//int ans;
//
//int main() {
//    cin >> s;
//    for (int i = 0; i < s.length(); i ++) {
//        if (i + 1 <= s.length() - 1) {
//            if(s[i]==s[i+1]||s[i]=='?'||s[i+1]=='?') //如果相邻两个字符相同
//            {
//                ans++;
//                i++; //直接跳过s[i+1]
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}