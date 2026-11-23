class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int cnt=0;
        while(i>=0 && s[i--]==' ') {}
        while(i>=0 && s[i--]!=' ') {cnt++;}
        return cnt+1;
    }
};