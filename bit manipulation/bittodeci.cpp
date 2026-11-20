#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
//    int t=0,rev=0;
//     while(n>0){
//         t=n%10;
//     rev=rev*2+t;
//     n/=2; 
//    }
//    cout<<rev;
int dec=0, base=1;
while(n>0){
    int t=n%10;
    dec+=t*base;
    base*=2;
    n/=10;
    
}
cout<<dec;
}