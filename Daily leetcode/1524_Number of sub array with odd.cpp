// class Solution {
// public:
// int mod=1000000007;
//     int numOfSubarrays(vector<int>& arr) {
//         // vector<int>vec;
//         // for(int i=0;i<arr.size();i++){
//         //    int sum=0;
//         //     for(int j=i;j<=arr.size();j++){
//         //         sum+=arr[j];
//         //     }
//         //     vec.push_back(sum);
//         // }
//         // int cnt=0;
//         // for(auto it:vec){
//         //     if(it%2!=0){
//         //         cnt++;
//         //     }
//         // }
//         // return cnt;
//         long long sum=0;
//         int odd=0;
//         int even=0;
//         long long ans=0;
//         for(int i=0;i<arr.size();i++){
//             sum+arr[i];

//         if(sum%2==1){
//             odd++;
//             ans+=even+1;
//         }else{
//             even++;
//             ans+=odd;
//         }
//         }
//         return ans%mod;
//     }
// };
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum=0;
        int ans=0;
         int e=1;
         int o=0;
        for(auto it:arr){
          sum+=it;
          if(sum%2){
            o++;
            ans+=e;
          }else{
            e++;
            ans+=o;
          }
         ans=ans%1000000007;
        }

        return ans;
    }
};