class Solution {
public:
    int binarySearch(vector<int>& nums, int target){
        int s=0;
        int e=nums.size();
        int mid;
        if(target>nums[e-1]){
            return e;
        }
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            // mid=s+(e-s)/2;
        }
        return s;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};