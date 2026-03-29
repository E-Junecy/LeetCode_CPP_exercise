class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(const auto& it:nums){
            m[it]++;
        }
        vector<pair<int,int>> vec(m.begin(),m.end());
        sort(vec.begin(),vec.end(),[](const auto& i,const auto& j){
            return i.second>j.second;
        });
        vector<int> res;
        for(int i=0;i<k&&i<vec.size();i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};