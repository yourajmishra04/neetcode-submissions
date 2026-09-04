class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        int n=p.size() , cp = p[0];
        for(int i=1;i<n;i++) {
             if(p[i] > cp) {
                ans=max ( ans ,  p[i] - cp);
               
             }
             else {
                cp = p[i];
             }
        }
        return ans;
    }
};
