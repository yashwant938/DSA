#include <bits/stdc++.h>
using namespace std;
void maximjumsubarrya(vector<int>vec){
    //  int n = vec.size();

    // int maxi = vec[0];
    // int mini = vec[0];
    // int ans = vec[0];
    // int maxi=1;
    // for(int i=0;i<n;i++){
    //    if(vec[i]<0){
    //     swap(vec[i],mini);
    //    }

    //    maxi=max(vec[i],maxi*vec[i]);
    //    mini=min(vec[i],mini*vec[i]);

    //    ans=max(ans,maxi);
    // }


    int pre=1,suf=1;
    int maxi=INT_MIN;
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(pre==0)  pre=1;
        if(suf==0)  suf=1;
        pre=pre*vec[i];
        suf=suf*vec[n-i-1];
        maxi=max(maxi,max(pre,suf));
    }
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
maximjumsubarrya(vec);
    

    return 0;
}