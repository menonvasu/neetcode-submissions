class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result; //result
        unordered_map<string, vector<string>> groups; //grouping anagrams

        for(const string& s : strs)
        {
            // sort by frequency
            int count[26] = {0};
            for (char c : s)
            {
                count[c - 'a']++;
            }

            // serialize array into key
            string key;
            key.reserve(52);
            for (int i = 0; i < 26; i ++)
            {
                key += '#';
                key += to_string(count[i]);
            }

            groups[key].push_back(s);
        }

        result.reserve(groups.size());

        // add group to result
        for(auto& [key, group] : groups)
        {
            result.push_back(move(group));
        }

        return result;
    }
};
