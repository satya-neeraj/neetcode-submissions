class Solution {
public:
    bool isVowel(char c)
    {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    int findTheLongestSubstring(string s) {
        unordered_map<int,int>mpp;
        int mask=0;
        unordered_map<char,int>mul;
        mul['a']=16;
        mul['e']=8;
        mul['i']=4;
        mul['o']=2;
        mul['u']=1;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(isVowel(s[i]))
            {
                mask^=mul[s[i]];
            }
            if(mask==0) ans=i+1;
            else if(mpp.find(mask)!=mpp.end())
            {
                ans=max(ans,i-mpp[mask]);
            }
            else mpp[mask]=i;
        }
        return ans;
    }
};
