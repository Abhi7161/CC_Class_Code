class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int start=0;
        int end=intervals.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(newInterval[0]>intervals[mid][0]) start=mid+1;
            else end=mid-1;
        }
        vector<vector<int>> res;
        intervals.insert(intervals.begin()+start,newInterval);
        for(int i=0;i<intervals.size();i++)
        {
            if(res.empty() || res.back()[1]<intervals[i][0])
            res.push_back(intervals[i]);
            else
            res.back()[1]=max(res.back()[1],intervals[i][1]);
        }
        return res;
    }
};
