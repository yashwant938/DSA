#include <bits/stdc++.h>
using namespace std;
void mereging(vector<int>vec,int left,int mid,int right){
    int l=left,r=right;
    vector<int>temp;
    while(l<r){
        if(vec[left]>vec[right]){

        }
    }
}
void mergesort(vector<int>vec,int left,int right){
    while(left<=right){
        int mid=(left+right)/2;
        mergesort(vec,left,mid);
        mergesort(vec,mid,right);
        mereging(vec,left,mid,right);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    mergesort(vec,0,n-1);

    return 0;
}