//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int N = 100000 + 10;
//typedef long long ll;
//
//int n, q[N], tmp[N];
//
//
//ll merge_sort(int a[], int l, int r) {
//    if (l >= r)return 0;
//    int mid = (l + r) >> 1;
//    ll ans = merge_sort(a, l, mid) + merge_sort(a, mid + 1, r);
//    int i = l, j = mid + 1, k = 0;
//    while (i <= mid && j <= r) {
//        if (a[i] <= a[j]) tmp[k++] = a[i++];
//        else {
//            tmp[k++] = a[j++];
//            ans += mid - i + 1;
//        }
//    }
//    while (i <= mid)tmp[k++] = a[i++];
//    while (j <= r)tmp[k++] = a[j++];
//    for (i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//    return ans;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> q[i];
//    }
//    cout << merge_sort(q, 0, n - 1) << endl;
//    return 0;
//}