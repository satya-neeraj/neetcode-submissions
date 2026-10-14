class Solution {
public:
    long long minEnd(int n, int x) {
        vector<int>idx;
        long long ans=x;
        for(int i=0;i<64;i++)
        {
            if(((ans>>i)&1)==0) idx.push_back(i);
        }
        int num=n-1;
        for(int i=0;i<32;i++)
        {
            if((num>>i)&1)
            {
                ans^=(1LL<<idx[i]);
            }
        }
        return ans;
    }
};