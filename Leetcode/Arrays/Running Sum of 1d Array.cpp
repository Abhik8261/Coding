class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=0, r=0,sum=0;
        vector<int>v;
        while(r<nums.size()){
            sum+=nums[r];
            v.push_back(sum);
            r++;
        }
        return v;
    }
};