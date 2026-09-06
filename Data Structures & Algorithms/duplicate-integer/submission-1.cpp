class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> mapp;
        for(int i = 0; i < nums.size(); i++) {
            if(mapp.find(nums[i]) == mapp.end()) {
                mapp[nums[i]] = true;
            } else return true;
        }
        return false;
    }
};