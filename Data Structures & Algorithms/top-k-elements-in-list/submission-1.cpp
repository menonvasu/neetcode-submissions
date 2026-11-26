class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        // tally frequency 
        for (int num : nums)
        {
            freq[num]++;
        }

        // create buckets based on count
        vector<vector<int>> buckets(nums.size() + 1);
        for (const auto& [val, count] : freq)
        {
            buckets[count].push_back(val);
        }

        vector<int> result;
        result.reserve(k);
        for (int count = nums.size(); count > 0; --count)
        {
            for (int val : buckets[count])
            {
                result.push_back(val);
                k--;
                if (k == 0) return result;
            }
        }

        return result;
    }
};
