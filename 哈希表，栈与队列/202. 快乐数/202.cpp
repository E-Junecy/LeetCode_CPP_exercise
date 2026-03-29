class Solution {
private:
    int happy(int n){
        int tem=0,r=0;
        while(n){
            tem=n%10;
            n/=10;
            r+=tem*tem;
        }
        return r;
    }
public:
    bool isHappy(int n) {
        int fast=n,slow=n;
        int max_iter=10000,iter=0;
        while(iter<max_iter){
            slow=happy(slow);
            int tem=happy(fast);
            fast=happy(tem);
            if(fast==1)return true;
            if(slow==fast)return false;
        }
        return false;
    }
};