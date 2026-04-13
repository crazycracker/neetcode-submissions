class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mapp;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            mapp[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto item: mapp) {
            pq.push({item.second, item.first});
        }

        for(int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};