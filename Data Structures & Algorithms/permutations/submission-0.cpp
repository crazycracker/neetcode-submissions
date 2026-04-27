class Solution {
public:
    vector<vector<int>> res;
    
    void backtrack(vector<int>& nums, vector<int> combination, vector<bool> visited) {

        if(combination.size() == nums.size()) {
            res.push_back(combination);
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(!visited[i]) {    
                combination.push_back(nums[i]);
                visited[i] = true;
                backtrack(nums, combination, visited);
                combination.pop_back();
                visited[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);
        backtrack(nums, {}, visited);
        return res;
    }
};
