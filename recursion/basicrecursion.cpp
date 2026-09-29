#include <bits/stdc++.h>
using namespace std;
void PrintName(int n){
    if(n==0) return;
    cout<<"Yash"<<endl;
    PrintName(n-1);
}
void PrintLinear(int n,int a){
    if(a==n)  return;
    cout<<a+1<<",";
    PrintLinear(n,a+1);
}
void ReversePrint(int n){
    if(n<=0)    return;
    cout<<n<<",";
    ReversePrint(n-1);
}
void BacktrackReverse(int n){
    if(n<=0)    return;
    BacktrackReverse(n-1);
    cout<<n<<",";
}
void NtoOneBacktraqck(int n,int m){
    if(m==n) return;
    NtoOneBacktraqck(n,m+1);
    cout<<m+1<<",";
}
//cleaner
void print1ToN(int n)
{
    if(n <= 0)
        return;

    print1ToN(n - 1);

    cout << n << ' ';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    // PrintName(n);

// PrintLinear(n,0);
    // ReversePrint(n);
    
//  BacktrackReverse(n);
 NtoOneBacktraqck(n,0);
    return 0;
}