#include <bits/stdc++.h>
using namespace std;
   int lowerBound(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
           
           if(nums[mid]>=target){
                ans=nums[mid];
                right=mid-1;
            }
            else
                left=mid+1;
        }
        return ans;
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
    int x;
    cin>>x;
    lowerBound(vec,x);

    return 0;
}