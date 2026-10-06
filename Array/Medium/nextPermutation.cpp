#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& vec, int n) {
    // next_permutation(vec.begin(), vec.end());
    int temp=0;
    for(int i=n-1;i>0;i--)
    {
        if(vec[i]>vec[i-1]){
            temp=i-1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(vec[temp]<vec[i]){
            swap(vec[temp],vec[i]);
        }
    }
    reverse(vec.begin()+temp+1,vec.end());

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

    nextPermutation(vec,n);
    for(auto it:vec){
        cout<<it<<",";
    }

    return 0;
}