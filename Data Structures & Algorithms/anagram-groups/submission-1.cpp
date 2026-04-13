class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mapp;
        vector<vector<string>> ans;

        for(int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            // if(mapp.find(temp) == mapp.end()) {
            //     mapp[temp] = new vector<int>();
            // }
            mapp[temp].push_back(i);
        }
        for(auto item: mapp) {
            vector<string> tempVec;

            for(auto index: item.second) {
                tempVec.push_back(strs[index]);    
            }
            ans.push_back(tempVec);
        }

        return ans;
    }
};
