void solve(string str, vector<string>& ans, int index, string output){
    if(index>=str.length()){
        if(output.length()>0){
            ans.push_back(output);
        }
        return;
    }
    //exclude
    solve(str ,ans, index+1, output);
    //include
    output+=str[index];
    solve(str ,ans, index+1, output);
}

vector<string> subsequences(string str){
	vector<string> ans;
    string output="";
    int index=0;
    solve(str ,ans, index, output);
    return ans;
}