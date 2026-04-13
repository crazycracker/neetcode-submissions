class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        vector<int> prefixProd, suffixProd;
        prefixProd.push_back(1);
        for(int i = 0; i < nums.size(); i++) {
            prefixProd.push_back(nums[i] * prefixProd[i]);    
        }
        suffixProd.push_back(1);
        for(int i = nums.size() - 1, j = 0; i >= 0; i--, j++) {
            suffixProd.push_back(nums[i] * suffixProd[j]);  
        }

        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(prefixProd[i] * suffixProd[nums.size() - i - 1]);
        }

        return ans;
    }
};
