class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0)
        {
            return -1;
        }
        int tsum = 0;
        for(int i = 0; i<nums.size();i++)
        {
            tsum = tsum + nums[i];
        }
        for(int i =1; i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        if(tsum == nums[0])
        {
            return 0;
        }
        for(int i =1; i<nums.size();i++)
        {
        if (tsum - nums[i]== nums[i-1])
        {
            return i;
        }
        
        }
        return -1;
    }
};