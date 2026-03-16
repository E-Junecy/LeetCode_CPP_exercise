class Solution {
public:
    string reverseWords(string s) {
        //1.去除多余空格
        int w=0, r=0, n=s.length();
        while(r < n) {
            if(s[r] != ' ') {
                if(w != 0) s[w++] = ' ';  // 不是第一个单词才加空格
                while(r < n && s[r] != ' ') s[w++] = s[r++];
            }
            r++;
        }
        s.resize(w);//去除后面不需要的部分
        //2.字符串翻转
        reverse(s.begin(),s.end());
        //3.单词翻转
        w=0;r=0;n=s.length();
        while(r<n){
            if(s[r]==' '){
                reverse(s.begin()+w,s.begin()+r);
                w=r+1;
            }
            r++;
        }
        reverse(s.begin()+w,s.end());
        return s;
    }
};