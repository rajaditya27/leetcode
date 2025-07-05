class Solution {
public:
    int findLucky(vector<int>& arr) {
    
        unordered_map<int,int> mp;

        for(int num: arr){
            mp[num]++;
        }
        int cnt=-1;
        for(auto &it:mp){
            if(it.first==it.second) {
                cnt=max(cnt,it.first);
            }
        }
        return cnt;
    }
};