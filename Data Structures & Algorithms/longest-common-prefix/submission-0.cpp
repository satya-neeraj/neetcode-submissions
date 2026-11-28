class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        string ans=strs[0];
        for(int i=1;i<n;i++)
        {
            string s=strs[i];
            string temp="";
            for(int j=0;j<min(s.size(),ans.size());j++)
            {
                if(s[j]==ans[j]) temp+=s[j];
                else break;
            }
            ans=temp;
        }
        return ans;
    }
};