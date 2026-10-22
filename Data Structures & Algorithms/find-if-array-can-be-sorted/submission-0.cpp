class Solution {
public:
    int countSet(int n)
    {
        int cnt=0;
        for(int i=0;i<9;i++) cnt+=((n>>i)&1);
        return cnt;
    }

    bool isSorted(vector<int> &arr)
    {
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1]) return false;
        }
        return true;
    }

    bool canSortArray(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n)
        {
            int cnt=countSet(nums[i]);
            int j=i;
            while(j<n && countSet(nums[j])==cnt) j++;
            sort(nums.begin()+i,nums.begin()+j);
            i=j;
        }
        return isSorted(nums);
    }
};
