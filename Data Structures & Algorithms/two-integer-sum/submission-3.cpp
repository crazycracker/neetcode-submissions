class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vec;
        for(int i = 0; i < nums.size(); i++) {
            vec.push_back({i, nums[i]});
        }
        sort(vec.begin(), vec.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second < b.second;
        });

        for(int i = 0, j = vec.size() - 1; i < j;) {
            if(vec[i].second + vec[j].second > target) j--;
            else if(vec[i].second + vec[j].second < target) i++;
            else if(vec[i].second + vec[j].second == target) {
                if(vec[i].first < vec[j].first) 
                    return {
                        vec[i].first,vec[j].first
                    };
                else return {
                        vec[j].first,vec[i].first
                    };
            }
        }
        return {};
    }
};
