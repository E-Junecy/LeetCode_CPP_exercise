class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
       for(;r<n;r++){
            if(!nums[l]&&nums[r]){
                int temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
            }
            while(nums[l]&&l<r){
                l++;
            }
       }
    }
};