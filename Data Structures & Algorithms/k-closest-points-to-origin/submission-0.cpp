class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> max_heap;

        for(const auto& point: points) {
            int dist = point[0] * point[0] + point[1] * point[1];
            max_heap.push({dist, point});

            if(max_heap.size() > k) max_heap.pop();
        }

        vector<vector<int>> result;

        while(!max_heap.empty()) {
            result.push_back(max_heap.top().second);
            max_heap.pop();
        }

        return result;
    }
};
