#include <bits/stdc++.h>
using namespace std;
int parition(vector<int>&vec ,int low,int high){
    int pivot=vec[low];
    int pivotIndex=low;
    low++;

    while(low<=high){
        while(low<=high && vec[low]<=pivot){
            low++;
        }
        while(low<=high && vec[high]>pivot){
            high--;
        }
        if(low<high){
            swap(vec[low],vec[high]);
            low++;
            high--;
        }
    }
    swap(vec[pivotIndex],vec[high]);
    return high;
    

}
void quicking(vector<int>& vec,int low,int high){
    if(low>=high)   return;
    int pivot=parition(vec,low,high);
    quicking(vec,low,pivot-1);
    quicking(vec,pivot+1,high);
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
    quicking(vec,0,n-1);
    for(auto it:vec){
        cout<<it<<",";
    }

    return 0;
}