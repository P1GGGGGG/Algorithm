#include<bits/stdc++.h>
using namespace std;

void qsort(vector<int>& a,int start,int end){
    if (start>=end)return ;
    int mid = a[start];
    int l = start+1,r=end-1;
    while (l<=r){
        while (a[l]<=mid&&l<=r)l++;
        while (a[r]>=mid&&l<=r)r--;
        if(l<r)swap(a[l],a[r]);
    }
    swap(a[start],a[r]);
    qsort(a,start,r);
    qsort(a,r+1,end);
}

int main(){
    vector<int> a ={0, 1, 1, 4, 3};
    qsort(a,0,a.size());
    for(auto i : a){
        cout<<i<<' ';
    }
}