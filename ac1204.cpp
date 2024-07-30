//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 10010;
//
//int num[N];
//int n, i;
//int ans1, ans2;
//
//int main() {
//    cin >> n;
//    string line;
//    getline(cin, line);
//    while (n--) {
//        getline(cin, line);
//        stringstream ssin(line);
//        while (ssin >> num[i])i++;
//    }
//    sort(num, num + i);
//    for (int j = 0; j < i - 1; ++j) {
//        if (num[j] == num[j + 1]) {
//            ans1 = num[j];
//            continue;
//        }
//        if (num[j] != num[j + 1] - 1) ans2 = num[j] + 1;
//    }
//    cout << ans2 << ' ' << ans1 << endl;
//    return 0;
//}