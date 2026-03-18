class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
        vector<int> list;
        list.reserve(n);
        int k=0;
        if(nums.empty())return k;
        for(int i=0;i<n;i++){
            if(i==0){
                list.push_back(nums.front());
                k++;
            }
            else{
                int j=0;
                for(j=0;j<list.size();j++){
                    if(nums[i]==list[j])j=n+1;
                }
                if(j==list.size()){
                    list.push_back(nums[i]);
                    k++;
                }
            }
        }
        nums.swap(list);
        return k;
    }
};