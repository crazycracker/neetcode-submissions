class Solution {
public:
    vector<vector<int>> res;

    void backtrack(vector<int>& nums, int index, int sum, int target, vector<int> subset) {
        if(sum > target || index == nums.size()) return;
        if(sum == target) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        backtrack(nums, index, sum + nums[index], target, subset);
        subset.pop_back();
        backtrack(nums, index + 1, sum, target, subset);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(nums, 0, 0, target, {});
        return res;
    }
};
