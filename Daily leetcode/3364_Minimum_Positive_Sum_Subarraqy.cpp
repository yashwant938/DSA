class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        // int sum=0;

        // for(int i=l;i<=r;i++){
        //     sum+=nums[i];
        // }
        // int preSum=0;
        // for(int i=0;i<nums.size();i++){
        //     preSum=0;
        //     for(int j=i+1;j<=nums.size()-1;j++){
        //         preSum+=nums[j];
        //         if(preSum==sum) return 1;
        //     }
        // }
        // return -1;

        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                int len=j-i+1;
                if(len>=l && len<=r &&sum>0){
                    ans=min(ans,sum);
                }
                if(len>r)   break;
            }
        }
        return ans==INT_MAX ?-1:ans;
    }
};