class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0, r= h.size()-1;
        int ans=0;
        while(l<r){
            int k= min(h[l],h[r]);
            int temp= (r-l)*k;
            ans= max(ans,temp);

            if(h[l]<h[r]) l++;
            else r--;
        }
        return ans;
    }
};
