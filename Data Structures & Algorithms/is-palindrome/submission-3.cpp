class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= '0' and s[i] <= '9'))
            {
                if((s[i] >= 'A' and s[i] <= 'Z')) temp += (s[i] + 32);
                else temp += s[i];
            }
        }
        for(int i = 0,j = temp.length()-1; i <= j; i++,j--){
            if(temp[i] != temp[j]) return false;
        }
        return true;
    }
};
