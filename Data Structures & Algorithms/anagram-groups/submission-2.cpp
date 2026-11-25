class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        
        // group all s by sorted string
        for (const string& s : strs)
        {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            groups[sortedS].push_back(s);
        }

        vector<vector<string>> result;
        result.reserve(groups.size());

        // add group to result
        for (auto& [key, group] : groups)
        {
            result.push_back(move(group));
        }

        return result;
    }
};
