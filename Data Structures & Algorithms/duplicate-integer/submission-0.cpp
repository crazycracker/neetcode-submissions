class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> sett;

        for(int i = 0; i < nums.size(); i++) {
            sett.insert(nums[i]);
        }

        if(nums.size() != sett.size()) return true;
        return false;
    }
};