class Solution {
public:
    char findTheDifference(string s, string t) {
        char xr=0;
        for(auto it:s) xr^=it;
        for (auto it:t) xr^=it;
        return xr;
    }
};