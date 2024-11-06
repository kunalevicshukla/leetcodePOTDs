//leetcode 3011
class Solution {
public:
    int setbits(int num)
    {
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(num&(1<<i))
                count++;
        }
        return count;
    }
    bool isSorted(vector<int>&nums)
    {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
                return false;
        }
        return true;
    }
    bool canSortArray(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        while(!isSorted(nums))
        {
            count++;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    if(setbits(nums[i])==setbits(nums[i+1]))
                    {
                        swap(nums[i],nums[i+1]);
                    }
                }
            }
            if(count>=n)
                return isSorted(nums);
        }
        return true;
      
    }
};