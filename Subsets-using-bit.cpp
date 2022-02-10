class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int num, vector<vector<int> >& ans) {
        int total=(int)(pow(2,nums.size())) -1;
        if(num>total){
            return;
        }
        int i=num;
        int index=0;
        while(i>0){
            if((i&1)==1){
                output.push_back(nums[index]);
            }
            index++;
            i=i>>1;
        }
        ans.push_back(output);
        output.clear();
        solve(nums, output, num+1, ans);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        int num = 0;
        solve(nums, output, num, ans);
        return ans;
        
    }
};