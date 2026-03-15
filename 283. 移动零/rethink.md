原来的想法是用while，但是涉及溢出、边界等问题，最终抛弃，还是遍历最稳健
下附源代码，肯定是有问题的，应避免这种解题思路
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        while(r<n){
            while(nums[r]==0){
                r++;
                //有溢出风险，检验
                if(r==n){
                    r--;
                    break;
                }
            }
            if(nums[l]==0&&nums[r]!=0){
                int temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
            }
            while(nums[l]!=0){
                if(l<=r){
                    l++;
                }
            }
            r++;
        }
    }
};