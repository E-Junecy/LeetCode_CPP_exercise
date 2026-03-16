class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, n=s.size(),x=0,max=0;
        unordered_map<char,int> map;
        while(r<n){
            char c=s[r];
            if(map.count(c)&&map[c]>=l){
                l=map[c]+1;
            }
            map[c]=r;
            x=r-l+1;
            if(x>max)max=x;
            r++;
        }
        return max;
    }
};