#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int>vec,int n){
    vector<int>ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0;i<n;i++){
        if(vec[i]<0){
            ans[negIndex]=vec[i];
            negIndex+=2;

        }else{
            ans[posIndex]=vec[i];
            posIndex+=2;
        }    
    }return ans;
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

    vector<int>ans=rearrange(vec,n);

    return 0;
}