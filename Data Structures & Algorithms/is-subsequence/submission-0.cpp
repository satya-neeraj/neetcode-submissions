class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size()) return false;
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j]) i++;
            j++;
        }
        return i==s.size();
    }
};