class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>map;
        for(char c:s)map[c]++;
        for(char c:t)map[c]--;
        for(auto& pair:map){
            if(pair.second!=0)return false;
        }
        return true;
    }
};