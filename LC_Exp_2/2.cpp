class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int left=intervals[0][0];
        int right=intervals[0][1];
        for(int i=1;i<n;i++){
            if(right>=intervals[i][0]){
                right=max(right,intervals[i][1]);
            }else{
                result.push_back({left,right});
                left=intervals[i][0];
                right=intervals[i][1];
            }
        }
        result.push_back({left,right});
        return result;
    }
};
