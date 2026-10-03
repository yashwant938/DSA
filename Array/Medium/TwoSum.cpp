#include <bits/stdc++.h>
using namespace std;
// void twoSum(vector<int>vec,int k){
//     sort(vec.begin(),vec.end());
//     int left=0, right=vec.size();
//     int sum=0;
//     while(left<right){
//         sum=vec[left]+vec[right];
//         if(sum>k){
//             right--;
//         }else if(sum<k){
//             left++;
//         }else{
//             cout<<vec[left]<<","<<vec[right]<<endl;
//             return;
//         }
//     }
// }
bool twoSum(vector<int>vec,int k){
    map<int,int>mpp;
    for(int i=0;i<vec.size();i++){
        int a=vec[i];
        int more=k-a;
        if(mpp.find(more)!=mpp.end()){
            return  true;
        }
        mpp[a]=i;
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
    
    (cout << (twoSum(vec,k) == true)) ? true : false;

    return 0;
}