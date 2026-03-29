class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;

        // 桶：下标是频率，存对应数字
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto& p : freq) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> res;
        // 从高频率往低频率拿
        for (int i = bucket.size()-1; i >=0 && res.size() < k; i--) {
            for (int num : bucket[i]) {
                res.push_back(num);
            }
        }
        return res;
    }
};