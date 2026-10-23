class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=0;
        for(auto it:nums) mx=max(it,mx);
        int ans=0;
        int cur=0;
        for(auto it:nums)
        {
            if(it==mx)
            {
                cur++;
                ans=max(ans,cur);
            }
            else cur=0;
        }
        return ans;
    }
};
