class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> newnums(nums.begin(), nums.end());
        if (newnums.size() != nums.size())
        {
            return true;
        }
        return false;
    }
};