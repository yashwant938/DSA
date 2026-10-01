#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int>&vec,int n){
    sort(vec.begin(),vec.end());
   int i=0;
   for(int j=1;j<n;j++){
    if(vec[j]!=vec[i]){
        vec[i+1]=vec[j];
        i++;
    }
}
return i+1;

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

    n=removeDuplicate(vec,n);
    for(int i=0;i<n;i++){
        cout<<vec[i];
    }
    return 0;
}