class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int c : nums)
        {
            res ^= c;
        }
        return res;
    }
};
//TC - O(n)
//SC - O(1)  
