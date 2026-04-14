class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i < numbers.size(); i++){
            mp[numbers[i]] = i + 1;
        }
        for(int i = 0; i < numbers.size(); i++){
            if(mp[numbers[i]] and mp[target - numbers[i]]) {
                ans.push_back(mp[numbers[i]]);
                ans.push_back(mp[target - numbers[i]]);
                break;
            }
        }
        return ans;
    }
};
