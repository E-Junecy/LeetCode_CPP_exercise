class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0,n=nums.size();
        vector<int> list;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                list.push_back(nums[i]);
                k++;
            }
        }
        nums.swap(list);
        //上一题未考虑细致，未释放临时vector数组占用的内存，这题注意到了，于是使用以下函数释放内存
        list.clear();
        list={};
        return k;
    }
};