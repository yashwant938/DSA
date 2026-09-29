 #include <bits/stdc++.h>
 using namespace std;
 void SumOfNNumber(int n,int sum){
    if(n<=0)    {
        cout<<sum<<",";
        return;
    }
    SumOfNNumber(n-1,sum+n);
 }
 int main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
 
     int n;
     cin>>n;
     SumOfNNumber(n,0);
 
     return 0;
 }