class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
     vector<int> prefix(n);
     vector<int> suffix(n);
     prefix[0]=1;
     int ans=1;
     for(int i=1;i<n;i++)
     {
        ans*=nums[i-1];
        prefix[i]=ans;
     }
     suffix[n-1]=1;
     ans=1;
     for(int i=n-2;i>=0;i--)
     {
        ans*=nums[i+1];
        suffix[i]=ans;
     }
     for(int i=0;i<n;i++) nums[i]=prefix[i]*suffix[i];
     return nums;   
    }
};
