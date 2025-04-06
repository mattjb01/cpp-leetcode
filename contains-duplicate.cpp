class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicates;

        for (const auto& num : nums)
        {
            if (duplicates.contains(num))
            {
                return true;
            }
            duplicates.insert(num);
        }
        return false;
    }
};
