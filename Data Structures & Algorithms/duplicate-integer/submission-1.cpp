class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> newnums = {};
        for (int i = 0; i < nums.size(); i++)
        {
            if (newnums.contains(nums[i]))
            {
                return true;
            }
            newnums.insert(nums[i]);
        }
        return false; 
    }
};