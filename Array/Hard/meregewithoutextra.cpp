#include <bits/stdc++.h>
using namespace std;
void merge(long long arr1[], long long arr2[],int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(arr1,arr1 +n);
    sort(arr2,arr2+m);
}
void swapGreater(long long arr1[], long long arr2[], int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void gapmethod(long long arr1[], long long arr2[],int n,int m){
    int gap=ceil((n+m)/2)+((n+m)%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(left<=gap ){
            if(left<n && right>=n){
                swapGreater(arr1,arr2,left,right-n);
            }//arr2
            else if(left>=n){
                swapGreater(arr1,arr2,left-n,right-n);
            }//arr1
            else{
            swapGreater(arr1,arr2,left,right);
            }
            left++, right++;
        }
if(gap==1)  break;
gap=(gap/2)+(gap%2);
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

    

    return 0;
}