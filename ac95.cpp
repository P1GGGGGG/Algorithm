#include "bits/stdc++.h"

using namespace std;

int g[5][5], backup[5][5];
int T;
int x[5] = {0, 0, -1, 1, 0};
int y[5] = {-1, +1, 0, 0, 0};


void turn(int i, int j) {
    for (int k = 0; k < 5; ++k) {
        int a = i + x[i], b = j + y[i];
        if (a < 0 || a >= 5 || b < 0 || b >= 5) continue;
        g[a][b] ^= 1;
    }
}

int main() {
    cin >> T;
    int res1, res2, res;
    while (T--) {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> g[i][j];
            }
        }
        memcpy(backup, g, sizeof g);
        for (int i = 1; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (g[i - 1][j] == 0) {
                    turn(i, j);
                    res1++;
                }
            }
        }
        for (int i = 0; i < 5; ++i) {
            if (g[4][i] == 0) {
                res1 = -1;
                break;
            }
        }
        memcpy(g, backup, sizeof backup);
        for (int i = 4; i >= 0; --i) {
            for (int j = 0; j < 5; ++j) {
                if (g[i][j] == 0) {
                    turn(i - 1, j);
                    res2++;
                }
            }
        }
        for (int i = 0; i < 5; ++i) {
            if (g[0][i] == 0) {
                res2 = -1;
                break;
            }
        }

    }
    cout << res << endl;
    return 0;
}