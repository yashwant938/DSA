#include <bits/stdc++.h>
using namespace std;
// int longestSubarraySumk(vector<int>&vec,long long k){
//     map<long long, int> preSumMap;
//     int maxLen=0;
//     long long sum=0;
//     for(int i=0;i<vec.size();i++){
//         sum+=vec[i];
//         if(sum==k){
//             maxLen=max(maxLen,i+1);
//         }
//         long long rem=sum-k;
//         if(preSumMap.find(rem)!=preSumMap.end()){
//             int len=i-preSumMap[rem];
//             maxLen=max(maxLen,len);
//         }
//        if( preSumMap.find(sum)==preSumMap.end()){
//         preSumMap[sum]=i;
//        }


//     }
//     return maxLen;
// }

/*Optimal solutiojn using two pointer approach*/


int longestSubarraySumk(vector<int>&vec,long long k){
int left=0, right=0;
long long sum=vec[0];
int maxLen=0;
int n=vec.size();
while(right<n){
    while(left<=right && sum>k){
        sum-=vec[left];
        left++;
    }
    if(sum==k) {
        maxLen=max(maxLen,right-left+1);

    }
    right++;
    if(right<n) sum+=vec[right];
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

    int k;
    cin>>k;

    cout<<longestSubarraySumk(vec,k);

    return 0;
}