//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int N = 1e6+10;
//
//int n;
//int num[N];
//int lesss[N];
//
//void merge_sort(int l, int r) {
//    if (l >= r) return;
//    int mid = l + r >> 1;
//    merge_sort(l, mid);
//    merge_sort(mid + 1, r);
//    int i = l, j = mid + 1, k = 0;
//    while (i <= mid && j <= r) {
//        if (num[i] < num[j]) {
//            lesss[k++] = num[i++];
//        } else {
//            lesss[k++] = num[j++];
//        }
//    }
//    while (i <= mid)lesss[k++] = num[i++];
//    while (j <= r)lesss[k++] = num[j++];
//    for (int m = l, x = 0; m <= r; ++m,x++) {
//        num[m] = lesss[x];
//    }
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> num[i];
//    }
//    merge_sort(0, n - 1);
//    for (int i = 0; i < n; ++i) {
//        cout << num[i]<<' ';
//    }
//    return 0;
//}