class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> temp;
        // Copy the elements of the input vector nums into a new vector nums2.
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        // For each element, calculate its new index after rotation by using the formula (i + k) % n, where i is the current index, k is the number of steps to rotate, and n is the size of the vector.
        // Assign the element from the copied vector nums2 to the calculated index in the original vector nums.
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=temp[i];
        }
        // return nums;
    }
};