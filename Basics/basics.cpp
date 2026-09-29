#include <bits/stdc++.h>
using namespace std;
void cntdigit(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    cout<<"count is="<<cnt;
}
void revreeseNumber(int n){
    int rev=0,dig=0;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    cout<<"reverse of the number is:-"<<rev;
}
void palindrome(int n){
        int rev=0,dig=0;
        int temp=n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    if(rev==temp){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"No Plaindrome"<<endl;
    }
}
int GCDD(int n1, int n2){
    if(n1==0)   return n2;
    if(n2==0)   return n1;
    if(n1>n2)   GCDD(n1-n2,n2);
    else GCDD(n1,n2-n1);
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    // cntdigit(n);
    // revreeseNumber(n);
    // palindrome(n);
    int n2=10;
    
    cout<<"GCD is="<<GCDD(n,n2);
   
    
    return 0;
}