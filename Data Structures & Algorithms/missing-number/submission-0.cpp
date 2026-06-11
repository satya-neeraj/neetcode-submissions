class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        for(auto it:nums) xr^=it;
        int actual_xor;
        if(n%4==0) actual_xor=n;
        else if(n%4==1) actual_xor=1;
        else if(n%4==2) actual_xor=n+1;
        else actual_xor=0;
        return xr^actual_xor;
    }
};
