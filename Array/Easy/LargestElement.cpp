#include <bits/stdc++.h>
using namespace std;
void largestElement(vector<int>vec,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       if(maxi<vec[i]){
        maxi=vec[i];
       }
    }
    cout<<"Max elemetn is ="<<maxi;
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
  
    largestElement(vec,n);

    return 0;
}