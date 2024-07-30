//#include<bits/stdc++.h>
//
//using namespace std;
//
//queue<char> a, b;
//stack<char> s;
//int check[128];
//int order = 1;
//
//int main() {
//    string s1, s2;
//    cin >> s1 >> s2;
//    for (int i = 0; i < s1.length(); ++i) {
//        a.push(s1[i]);
//    }
//    for (int i = 0; i < s2.length(); ++i) {
//        b.push(s2[i]);
//    }
//    while (!a.empty() && !b.empty()) {
//        char tmp1 = a.front(), tmp2 = b.front();
//        if (order == 1) {
//            s.push(tmp1);
//            a.pop();
//            if (check[s.top()]) {
//                a.push(s.top());
//                s.pop();
//                while (s.top() != tmp1) {
//                    a.push(s.top());
//                    check[s.top()]--;
//                    s.pop();
//                }
//                a.push(s.top());
//                check[s.top()]--;
//                s.pop();
//                order = 1;
//            } else {
//                check[s.top()]++;
//                order = 2;
//            }
//        } else {
//            s.push(tmp2);
//            b.pop();
//            if (check[s.top()]) {
//                b.push(s.top());
//                s.pop();
//                while (s.top() != tmp2) {
//                    b.push(s.top());
//                    check[s.top()]--;
//                    s.pop();
//                }
//                b.push(s.top());
//                check[s.top()]--;
//                s.pop();
//                order = 2;
//            } else {
//                check[s.top()]++;
//                order = 1;
//            }
//        }
//
//    }
//    while (!a.empty()) {
//        cout << a.front();
//        a.pop();
//    }
//    while (!b.empty()) {
//        cout << b.front();
//        b.pop();
//    }
//    return 0;
//}