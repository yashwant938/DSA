#include <bits/stdc++.h>
using namespace std;
void LinearSearch(vector<int>vec,int m,int k){
    for(int i=0;i<n;i++){
        if(vec[i]==k){
            cout<<"found at location "<<i<<"\n";
        }
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
    int k;
    cin>>k;
    LinearSearch(vec,n,k);

    return 0;
}