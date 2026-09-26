#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&vec,int n){
    int mini=INT_MAX;
    int ind=0;
    for(int i=0;i<n-1;i++){
         mini=vec[i];
         ind=i;
        for(int j=i+1;j<n;j++){
           
            if(mini>vec[j]){
                mini=vec[j];
                ind=j;
            }
            
        }
        swap(vec[i],vec[ind]);
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    selectionsort(vec,n);
    for(auto it:vec){
        cout<<it<<",";
    }

}