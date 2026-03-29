class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. 统计频率
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // 2. 定义小顶堆
        // 堆里存 pair<频率, 数值>
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> heap;

        // 3. 往堆里塞，只保留 k 个
        for (auto& p : freq) {
            int num = p.first;
            int cnt = p.second;

            heap.emplace(cnt, num);

            // 堆大小超过 k，弹出最小的
            if (heap.size() > k) {
                heap.pop();
            }
        }

        // 4. 把堆里的元素拿出来
        vector<int> res;
        while (!heap.empty()) {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};