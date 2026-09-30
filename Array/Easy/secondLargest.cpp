#include <bits/stdc++.h>
using namespace std;
void secondlargestElement(vector<int>vec,int n){
    int maxi=INT_MIN;
    int smaxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //    if(maxi<vec[i]){
        
    //     maxi=vec[i];
    //    }
    // }
    // for(int i=0;i<n;i++){
    //     if(smaxi<vec[i] && vec[i]!=maxi){
    //         smaxi=vec[i];
    //     }
    // }
      for (int x : vec) {

        if (x > maxi) {
            smaxi = maxi;
            maxi = x;
        }
        else if (x > smaxi && x != maxi) {
            smaxi = x;
        }
    }
    cout<<"Second Max elemetn is ="<<smaxi;
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
  
    secondlargestElement(vec,n);

    return 0;
}