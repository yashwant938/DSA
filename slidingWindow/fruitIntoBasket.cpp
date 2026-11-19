#include <bits/stdc++.h>
using namespace std;
int fruitBasket(vector<int>&vec, int n){
    int left=0, right=0, maxLen=0;
    map<int,int>mpp;
    while(right<vec.size()){
        mpp[vec[right]]++;
        if(mpp.size()>k){
            while(mpp.size()>k){
                mpp[vec[left]]--;
                if(mpp[vec[left]]==0)
                    mpp.erase(vec[left]);
                left++;
            }
        }
        if(mpp.size()<=k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
      }
      return maxLen;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
// use set to optimize check set size should be 2
     
    int k;
    cin>>k;
    cout<<fruitBasket(vec,k);
    return 0;
}