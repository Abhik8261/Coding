class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum%k)!=mpp.end()){
               
                if(i-mpp[sum%k]>=2){
                    return true;

                }
                
            }
            else{
                mpp[sum%k]=i;
            }
        }
        return false;
    }
};