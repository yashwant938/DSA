#include <bits/stdc++.h>
using namespace std;
void unionArray(vector<int>vec, vector<int>vec2){
    int n=vec.size(),m=vec2.size();
    int left=0;
    int right=0;
    
    vector<int>ans;
    while(left<n && right<m){
        if(vec[left]>vec2[right]){
            ans.push_back(vec2[right]);
            right++;
        }else if(vec[left]<vec2[right]){
            ans.push_back(vec[left]);
            left++;
        }else{
            ans.push_back(vec[left]);
            right++;
            left++;
        }
    }
    while(left<n){
        ans.push_back(vec[left]);
        left++;
    }
    while(right<m){
        ans.push_back(vec2[right]);
        right++;
    }
    
    for(auto it: ans){
        cout<<it<<",";
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
    int m;
    cin>>m;
    vector<int>vec2(m);
    for(int i=0;i<m;i++)
    {
        cin>>vec2[i];
    }


    unionArray(vec,vec2);
    return 0;
}