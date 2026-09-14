class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int n=s.size();
        int i=0,j=0;
        int ans=0;
        while(i<n ){
         
           while(j<n && st.find(s[j]) == st.end()) {
                    st.insert(s[j]);
                    j++;
           }
           ans= max(ans,j-i);
           if(j>=n) break;
           while(s[i] != s[j]) {
            st.erase(s[i]);
            i++;
           }
             st.erase(s[i]);
            i++;
           
        }
        return ans;
    }
};
