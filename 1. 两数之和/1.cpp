class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //1.提取nums下标放入List数组,并对后者排序
        int n = nums.size();
        vector<int> list;
        for(int i=0;i<n;i++)list.push_back(i);
        sort(list.begin(),list.end(),[nums,list](int i,int j){
            return nums[list[i]]<nums[list[j]];
        });
        //2.双指针查找符合条件的两数，输出下标
        int L=0,R=n-1,sum;
        vector<int> res;
        while(L<R){
            sum=nums[list[L]]+nums[list[R]];
            if(sum==target){
                res.push_back(list[L]);
                res.push_back(list[R]);
                break;
            }
            else if(sum<target){
                L++;
            }
            else if(sum>target){
                R--;
            }
        }
        return res;
    }
};