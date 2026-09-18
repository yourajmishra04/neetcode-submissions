class Solution {
public:

    vector<vector<int>> ans;
    int n;
     void solve(vector<int>& nums, int target , int curr , vector<int> v, int idx){
        if(curr == target) {
            ans.push_back(v);
            return ;
        }
        if(curr> target) return;
        for(int i=idx;i<n;i++){
             curr+=nums[i];
             v.push_back(nums[i]);
             solve(nums , target , curr , v,i);
             curr-=nums[i];
             v.pop_back();
        }
     }
     
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        ans.clear();
        n=nums.size();
        vector<int>v;
        solve(nums , target , 0,v,0);
        return ans;
    }
};
