class Solution {
public:
    void solve(string arr[], string digits, int index, vector<string>& ans, string output){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        int number=digits[index] - '0';
        string value=arr[number];
        
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(arr, digits, index+1, ans, output);
            //Backtracking
            output.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        
        string arr[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output="";
        int index=0;
        solve(arr, digits, index, ans, output);
        return ans;
    }
};