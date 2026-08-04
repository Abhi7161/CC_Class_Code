class Solution {
public:
    bool solve(int mid,vector<int> &piles,int h)
    {
        double count=0;
        for(int i=0;i<piles.size();i++)
        {
            count+=ceil((double)piles[i]/(double)mid);
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0;
        int end=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(solve(mid,piles,h))
            {
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};
