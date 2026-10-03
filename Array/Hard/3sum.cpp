#include <bits/stdc++.h>
using namespace std;
void threeSum(vector<int>vec,int k){
    sort(vec.begin(),vec.end());

    int sum=0;
    for(int i=0;i<vec.size()-2;i++){
            int left=i+1, right=vec.size()-1;
    while(left<right){
        sum=vec[left]+vec[right]+vec[i];
        if(sum>k){
            right--;
        }else if(sum<k){
            left++;
        }else{
            cout<<vec[left]<<","<<vec[right]<<","<<vec[i]<<endl;
            return;
        }
    }
}
cout << "No triplet found";
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
    
    threeSum(vec,k);

    return 0;
}