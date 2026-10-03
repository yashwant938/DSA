#include <bits/stdc++.h>
using namespace std;
void sortedArray(vector<int>&vec){
    int left=0, mid=0, right=vec.size()-1;
    while(left<=right && mid<=right){
        if(vec[mid]==0){
            swap(vec[left],vec[mid]);
            left++;
            mid++;
        }else if(vec[mid]==1){
            mid++;
        }else{
            swap(vec[mid],vec[right]);
            right--;
            // mid++;
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

    sortedArray(vec);
    for(auto it:vec){
        cout<<it<<",";
    }

    return 0;
}