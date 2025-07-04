void subf(vector<int>&nums,int indx, vector<vector<int>>&ans,int n,vector<int>ds){
        
        if(indx==n){
            ans.push_back(ds);

           
            return ;
        }
        ds.push_back(nums[indx]);
        subf(nums,indx+1,ans,n,ds);
        ds.pop_back();
        subf(nums,indx+1,ans,n,ds);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int > ds;
        int n= nums.size();
        subf(nums, 0, ans, n,ds);
        return ans;
    }
};