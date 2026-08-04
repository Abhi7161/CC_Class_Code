class Solution {
public:
    bool isValid(vector<int> &nums,int k,int mid)
    {
        int csum=0;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            csum+=nums[i];
            if(csum>mid)
            {
                csum=nums[i];
                count++;
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isValid(nums,k,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }
};
