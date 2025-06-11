class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int maxsum=0;
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum=sum+arr[i][j];
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;
    }
};