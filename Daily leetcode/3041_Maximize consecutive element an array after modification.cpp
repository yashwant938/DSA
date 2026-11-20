// class Solution {
// public:
//     int n;
//     int findMethod(vector<int>)
//     int solve(int i,int inc,vector<int>& nums){
//         int cur=nums[i]+inc;
//         int len=1;
//         //1st option= find(curval+1)
//         int j=findMethod(nums,i+1,cur+1);
//         if(j!=-1){
//             len=max(len,1+solve(j,0,nums));
//         }
//         // option 2 find(curval) and then  inc by 1
//          int j=findMethod(nums,i+1,cur+1);
//         if(j!=-1){
//             len=max(len,1+solve(j,1,nums));
//         }
//         return result;
//     }
//     int maxSelectedElements(vector<int>& nums) {
//          n=nums.size();
//         int result=1;
//         for(int i=0;i<n;i++){
//             result=max({result, solve(i,0,nums),solve(i,1,nums)});
//         }
//         return result;
//     }
// };



class Solution {
public:
    int n;
    vector<vector<int>> dp;

    // Find first index >= start where nums[index] == target
    int findMethod(vector<int>& nums, int start, int target) {
        int lo = start, hi = n;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid;
            }
        }

        if (lo < n && nums[lo] == target) {
            return lo;
        }

        return -1;
    }

    int maxSelectedElements(vector<int>& nums) {

        n = nums.size();

        sort(nums.begin(), nums.end());

        dp.assign(n + 1, vector<int>(2, 0));

        int result = 1;

        for (int i = n - 1; i >= 0; i--) {

            for (int inc = 0; inc <= 1; inc++) {

                int currVal = nums[i] + inc;
                int len = 1;

                // Option 1: Find currVal + 1
                int j = findMethod(nums, i + 1, currVal + 1);

                if (j != -1) {
                    len = max(len, 1 + dp[j][0]);
                }

                // Option 2: Find currVal, then increment it
                j = findMethod(nums, i + 1, currVal);

                if (j != -1) {
                    len = max(len, 1 + dp[j][1]);
                }

                dp[i][inc] = len;

                result = max(result, len);
            }
        }

        return result;
    }
};
