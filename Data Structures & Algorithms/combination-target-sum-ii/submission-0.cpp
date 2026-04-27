class Solution {
public:
    vector<vector<int>> res;

    void backtrack(vector<int>& candidates, int index, int sum, int target, vector<int> subset) {
        if(sum == target) {
            res.push_back(subset);
            return;
        }
        if(sum > target || index == candidates.size()) return;

        subset.push_back(candidates[index]);
        backtrack(candidates, index + 1, sum + candidates[index], target, subset);
        subset.pop_back();

        while (index + 1 < candidates.size() && candidates[index] == candidates[index + 1]) index++;
        backtrack(candidates, index + 1, sum, target, subset);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, 0, 0, target, {});
        return res;
    }
};