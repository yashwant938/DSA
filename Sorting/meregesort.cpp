#include <bits/stdc++.h>
using namespace std;
void mereging(vector<int>& vec,int left,int mid,int right){
    int l=left,r=mid+1;
   vector<int> temp;
while(l <= mid && r <= right){
    if(vec[l] <= vec[r]){
        temp.push_back(vec[l]);
        l++;
    }
    else{
        temp.push_back(vec[r]);
        r++;
    }
}
while(l<=mid){
    temp.push_back(vec[l]);
    l++;
}
while(r<=right){
    temp.push_back(vec[r]);
    r++;
}

  for(int i=left;i<=right;i++){
    vec[i]=temp[i-left];
  }
}
void mergesort(vector<int>& vec,int left,int right){
    if(left>=right) return;
        int mid=(left+right)/2;
        mergesort(vec,left,mid);
        mergesort(vec,mid+1,right);
        mereging(vec,left,mid,right);
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
      for(auto x : vec){
        cout << x << " ";
    }

    return 0;
}