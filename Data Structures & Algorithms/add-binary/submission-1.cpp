class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size()) return addBinary(b,a);
        while(b.size()!=a.size())
        {
            b='0'+b;
        }
        int carry=0;
        string ans;
        for(int i=a.size()-1;i>=0;i--)
        {
            int sum=a[i]-'0'+b[i]-'0'+carry;
            int res=sum%2;
            ans=(char)(res+'0')+ans;
            carry=sum/2;
        }
        if(carry==1) ans='1'+ans;
        return ans;
    }
};