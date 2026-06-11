class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(auto it:nums) xr^=it;
        int bucket1=0,bucket2=0;
        int last_bit=(xr&(xr-1))^xr;
        for(auto it:nums)
        {
            if(it&last_bit) bucket1^=it;
            else bucket2^=it;
        }
        return {bucket1,bucket2};
    }
};