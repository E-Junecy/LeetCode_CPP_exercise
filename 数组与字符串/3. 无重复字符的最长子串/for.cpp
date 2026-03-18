class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, n=s.size(),x=0,max=0;
        while(r<n){
            for(int i=l;i<r;i++){
                if(s[r]==s[i]){
                    l=i+1;
                    break;
                }
            }
            x=r-l+1;
            if(x>max)max=x;
            r++;
        }
        return max;
    }
};