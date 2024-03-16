class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // // two pointer approach
        // int j=-1;
        // // iterate and taking jth index is zero 
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         j=i;
        //         break;
        //     }
        // }
        // // if(j==-1) return nums;
        // // now iterate and swap with the non zero number 
        // for(int i=j+1;i<nums.size();i++){
        //     if(nums[i]!=0){
        //         swap(nums[i],nums[j]);
        //         j++;
        //     }
        // }
        // // return nums;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};