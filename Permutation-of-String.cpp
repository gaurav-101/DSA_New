class Solution {
public:
    void solve(int index,vector<int> output, vector<vector<int>>& ans, vector<int> nums){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(output[index],output[i]);
            solve(index+1,output,ans,nums);
            swap(output[index],output[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> output=nums;
        solve(index,output,ans,nums);
        return ans;
    }
};