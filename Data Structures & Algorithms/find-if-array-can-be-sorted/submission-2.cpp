class Solution {
public:
    int countSet(int n)
    {
        int cnt=0;
        for(int i=0;i<9;i++) cnt+=((n>>i)&1);
        return cnt;
    }

    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        int prev=countSet(nums[0]);
        int curMx=nums[0];
        int curMn=nums[0];
        int prevMx=0;
        for(int i=1;i<n;i++)
        {
            int cur=countSet(nums[i]);
            if(cur==prev)
            {
                curMx=max(nums[i],curMx);
                curMn=min(nums[i],curMn);
            }
            else
            {
                if(prevMx>curMn) return false;
                prevMx=curMx;
                curMx=nums[i];
                curMn=nums[i];
                prev=cur;
            }
        }
        return curMn>=prevMx;
    }
};
