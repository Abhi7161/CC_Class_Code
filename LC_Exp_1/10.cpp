class Solution {
public:
    bool solve(int mid,vector<int> &weights,int days)
    {
        long long total=0;
        long long count=1;
        for(int i=0;i<weights.size();i++)
        {
            total+=weights[i];
            if(total<=mid)
            {
                continue;
            }
            else
            {
                count++;
                total=weights[i];
            }
        }
        if(total<=mid) count++;
        return count<=days;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=1;
        int end=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(solve(mid,weights,days))
            {
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }

};
