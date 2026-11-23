class Solution {
public:
    int countSetBits(int n)
    {
        int cnt=0;
        for(int i=0;i<32;i++)
        {
            if((n>>i)&1) cnt++;
        }
        return cnt;
    }

    int minimizeXor(int num1, int num2) {
        int cnt=countSetBits(num2);
        int x=0;
        for(int i=31;i>=0;i--)
        {
            if(cnt==0) return x;
            if((num1>>i)&1)
            {
                x^=(1<<i);
                cnt--;
            }
        }
        int i=0;
        while(cnt>0 && i<32)
        {
            if((x>>i)&1){}
            else
            {
                cnt--;
                x^=(1<<i);
            }
            i++;
        }
        return x;
    }
};
