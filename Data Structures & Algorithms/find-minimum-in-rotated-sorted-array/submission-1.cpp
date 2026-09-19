class Solution {
public:
    int findMin(vector<int> &nums) {
        int n= nums.size();
        int l=0, r=n-1;
        int idx=-1,mid;
        while(l<=r){
            if(l==r){
                idx=l;
                break;
            }
            mid=(l+r)/2;
            if(nums[mid]>= nums[r]) l=mid+1;
            else{
                idx=mid;
                r=mid;
            }

        }
        return nums[idx];
    }
};
