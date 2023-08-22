class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(char c : columnTitle){
            int res = c - 'A' + 1;
            ans = ans*26+res;
        }
        return ans;
    }
};