class Solution {
    int firstocc(vector<int>& nums, int n,int target){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
     int lastocc(vector<int>& nums,int n, int target){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
     vector<int> res;
     res.push_back(firstocc(nums,n,target));
     res.push_back(lastocc(nums,n,target));
     return res;
    }  
};