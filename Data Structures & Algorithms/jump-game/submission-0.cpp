class Solution {
public:
    bool canJump(vector<int>& nums) {
        int c=1;
        for(int i=0;i<nums.size();i++){
            if(c<1) return 0;
            c--;
            c=max(c , nums[i]);
        }
        return 1;
    }
};
