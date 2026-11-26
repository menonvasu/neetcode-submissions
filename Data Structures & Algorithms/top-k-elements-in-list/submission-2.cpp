class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        
        // add pair to vector
        vector<pair<int, int>> pairs;
        for (const auto& [num, count] : freq)
        {
            pairs.push_back({count, num});
        }

        // sort
        sort(pairs.rbegin(), pairs.rend());

        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(pairs[i].second);
        }

        return result;
    }
};
