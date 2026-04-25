class Solution {
private:
    priority_queue<int, vector<int>> maxHeap;
public:
    int lastStoneWeight(vector<int>& stones) {
        for(int stone: stones) {
            maxHeap.push(stone);
        }

        while(maxHeap.size() >= 2) {
            int one = maxHeap.top(); maxHeap.pop();
            int two = maxHeap.top(); maxHeap.pop();
            one = abs(one - two);
            if(one > 0)
                maxHeap.push(one);
        }

        if(maxHeap.size() > 0) return maxHeap.top();
        return 0;
    }
};
