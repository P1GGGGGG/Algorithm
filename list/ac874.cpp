/*
#include<bits/stdc++.h>

using namespace std;

#define int long long

int n;
int res;

signed main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int num = i, x = i, s;
        for (int j = 2; j * j <= x; ++j) {
            s = 0;
            if (x % j == 0) {
                while (x % j == 0) {
                    x /= j;
                }
                s = 1;
            }
            if (s == 1) {
                num = num / j * (j - 1);
            }
        }
        if (x > 1) num = num / x * (x - 1);
        res += num;
    }
    cout << res << endl;
    return 0;
}*/
