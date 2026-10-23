class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        vector<int>hash(32,-1);
        int ans=1;
        int n=nums.size();
        int left=0;
        for(int i=0;i<n;i++)
        {
            for(int bit=0;bit<32;bit++)
            {
                if((nums[i]>>bit)&1) 
                {
                    left=max(left,hash[bit]+1);
                    hash[bit]=i;
                }
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};
