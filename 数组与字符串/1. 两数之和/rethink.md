 sort(list.begin(),list.end(),[nums,list](int i,int j){
            return nums[list[i]]<nums[list[j]];
        });
#这段代码过于臃肿了，而且lambda中本不必要出现list，完全可以简化成
sort(list.begin(),list.end(),[nums](int i,int j){
            return nums[i]<nums[j];
        });