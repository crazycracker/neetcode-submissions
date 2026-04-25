class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        int sum = n;
        while(seen.find(n) == seen.end()) {
            sum = 0;
            seen.insert(n);
            while(n){
                sum += ((n % 10) * (n % 10));
                n /= 10;
            }
            if(sum == 1) return true;
            n = sum;
        }

        return false;
    }
};
