#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n, vector<int>&dp){
    if(n==1 || n==0)    return n;
    if(dp[n]!=-1)  return dp[n]; 
    return dp[n]= fibonacci(n-1,dp)+fibonacci(n-2,dp);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fibonacci(n,dp);

    return 0;
}