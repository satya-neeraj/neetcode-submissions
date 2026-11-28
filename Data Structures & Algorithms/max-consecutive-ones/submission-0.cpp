class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]==0) {i++;continue;}
            int j=i;
            while(j<n && nums[j]==1) {j++;}
            ans=max(ans,j-i);
            i=j;
        }
        return ans;
    }
};