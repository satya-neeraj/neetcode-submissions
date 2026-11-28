class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                string str=words[j];
                if(str.size()<s.size()) continue;
                int k=0;
                int l=0;
                while(k<str.size() && l<s.size())
                {
                    if(str[k]==s[l]) l++;
                    else l=0;
                    k++;
                }
                if(l==s.size())
                {
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};