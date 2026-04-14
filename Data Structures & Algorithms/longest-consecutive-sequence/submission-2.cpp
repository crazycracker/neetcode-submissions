class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()  == 0) return 0;
        int minn = INT_MAX, maxx = INT_MIN;
        int size = nums.size();
        unordered_map<int,bool> mapp;
        for(int i = 0; i < size; i++) {
            minn = min(nums[i], minn);
            maxx = max(nums[i], maxx);
            mapp[nums[i]] = true;
        }
        int ans = 1, tempSize = 1;
        for(int i = minn + 1; i <= maxx; i++) {
            if(mapp[i] && mapp[i - 1]) tempSize++;
            else tempSize = 1;
            ans = max(tempSize, ans); 
        }

        return ans;
    }
};
