class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> numbFreq;
        unordered_set<int> uniqueCount;
        for(int num:arr)
        {
            numbFreq[num]++;
        }

        for(const auto& pair:numbFreq )
        {
            if(uniqueCount.find(pair.second) !=uniqueCount.end())
            {
                return false;
            }
            uniqueCount.insert(pair.second);
        }
        return true;
        
    }
};
// TC - O(n)
// SC - O(n)
