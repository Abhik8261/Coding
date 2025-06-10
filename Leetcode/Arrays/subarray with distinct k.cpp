class Solution {
public:

int sub(vector<int>&nums,int k){
 unordered_map<int,int>s;
        int l=0,r=0,cnt=0;
        while(r<nums.size()){
            if(s[nums[r]]==0)
            k--;
            s[nums[r]]++;
            while(k<0){
                s[nums[l]]--;
                 if(s[nums[l]]==0)
                k++;
                 l++;
            
          
            }
          
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
}

    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int ans= sub(nums,k)- sub(nums,k-1);
       return ans;
    }
};