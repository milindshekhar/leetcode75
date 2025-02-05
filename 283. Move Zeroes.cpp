class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[lastNonZeroIndex]);
                lastNonZeroIndex++;
            }
        }
    }
};

//TC - O(n) Traversing array only once
//SC - O(1) In - place 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};

//TC - O(n)
//SC - O(n)
