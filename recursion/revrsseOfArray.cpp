#include <bits/stdc++.h>
using namespace std;
void reverseOfAnArray(vector<int> &vec,int left){
    int n = static_cast<int>(vec.size());
    if(left>=n/2)  return;
    swap(vec[left],vec[vec.size()-1-left]);
    reverseOfAnArray(vec,left+1);

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
    reverseOfAnArray(vec,0);
    for(auto it:vec)
        cout<<it<<",";


    return 0;
}