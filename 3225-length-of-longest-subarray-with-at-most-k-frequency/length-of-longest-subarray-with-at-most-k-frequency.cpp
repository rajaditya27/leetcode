class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left =0, right=0, ans=0;
        unordered_map<int,int> mp;
        while(left<nums.size() && right<nums.size()){
            mp[nums[right]]++;
            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};