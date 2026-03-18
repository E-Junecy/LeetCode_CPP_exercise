class Solution {
public:
    string reverseStr(string s, int k) {
        int l=0,r=0,n=s.size();
        while(r<n){
            if(r-l+1==2*k){
                reverse(s.begin()+l,s.begin()+l+k);
                if(r<n-1)l=r+1;
            }
            r++;
        }
        int x=n-l;
        if(x>0&&x<=k)reverse(s.begin()+l,s.end());
        else if(x>k&&x<2*k)reverse(s.begin()+l,s.begin()+l+k);
        return s;
    }
};