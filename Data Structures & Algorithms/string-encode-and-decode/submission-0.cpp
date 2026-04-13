class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(const string& str: strs) {
            res += to_string(str.size()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i = 0; i < (int)s.length(); ) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            string content = s.substr(i, len);
            ans.push_back(content);
            i += len;
        }
        return ans;
    }
};
