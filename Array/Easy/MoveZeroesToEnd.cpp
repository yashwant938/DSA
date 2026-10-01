#include <bits/stdc++.h>
using namespace std;
void movesZeroesToEnd(vector<int>& vec,int n){
    int left=0, right=n-1;
    while(left<=right){
        if(vec[left]==0 &&vec[right]==0){
            right--;
        }else if(vec[left]==0&&vec[right]!=0){
            swap(vec[left],vec[right]);
            left++;
        }else if(vec[left]!=0 && vec[right]==0){
            right--;
        }else{
            left++;
        }
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
    movesZeroesToEnd(vec,n);
    
    for(auto it:vec){
        cout<<it<<",";
    }
    return 0;
}