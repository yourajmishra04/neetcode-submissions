class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int ans= nums[0];
         int n=nums.size();
         int curr = nums[0];
         for(int i=1;i<n;i++){
                 int k=curr+nums[i];
               if(k<nums[i]) curr = nums[i];
               else curr = k;
                 ans=max(ans,curr);
         }
         return ans;
    }
};
