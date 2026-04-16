class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        int countOfS1[26];
        int countOfS2[26];
        for(int i = 0; i < 26; i++) {
            countOfS1[i] = 0;
            countOfS2[i] = 0;
        }
        for(int i = 0; i < s1.length(); i++) {
            countOfS1[s1[i] - 'a']++;
            countOfS2[s2[i] - 'a']++;
        }

        int matches = 0;
        for(int i = 0; i < 26; i++) {
            if(countOfS1[i] == countOfS2[i]) matches++;
        }

        int l = 0;
        for(int i = s1.length(); i < s2.length(); i++) {
            if(matches == 26) return true;
            int index = s2[i] - 'a';
            countOfS2[index]++;
            if(countOfS1[index] == countOfS2[index]) matches++;
            else if(countOfS1[index] + 1 == countOfS2[index]) matches--;

            index = s2[l] - 'a';
            countOfS2[index]--;
            if(countOfS1[index] == countOfS2[index]) matches++;
            else if(countOfS1[index] - 1 == countOfS2[index]) matches--;
            l++;
        }

        return matches == 26;
    }
};
