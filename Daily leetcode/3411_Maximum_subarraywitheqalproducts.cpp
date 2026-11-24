class Solution {
public:
    int maxLength(vector<int>& nums) {
    //    for(int i=0;i<nums.size();i++){
    //     for(int j=i;j<nums.size();j++){
    //         prod[i]+=lcm(arr[i])
    //     }
    //    } 
    int best=2, left=0, product=1;
    for(int right=0;right<ssize(nums);right++){
        int x=nums[right];
        while(gcd(product,x)>1)
            product/=nums[left++];
            product*=x;
            best=max(best,right-left+1);

    }
    return best;
    }
};