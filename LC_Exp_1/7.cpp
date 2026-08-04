class Solution {
public:
    int firstOccurence(vector<int> &nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int first=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return first;
    }
    int lastOccurence(vector<int> &nums,int target)
    {
        int start=0;
        int end=nums.size()-1;
        int last=-1;
        while(start<=end)
        {
            int  mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int firstIndex=firstOccurence(nums,target);
        int lastIndex=lastOccurence(nums,target);
        return {firstIndex,lastIndex};
    }
};
