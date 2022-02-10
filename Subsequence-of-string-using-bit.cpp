#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

void solve(string str , vector<string>& ans, int num, string output){
    int n=str.length();
    int total=(int)(pow(2,n))-1;
    if(num>total){
        return;
    }
    int index=0;
    int i=num;
    while(i>0){
        if((i&1)==1){
            output+=str[index];
        }
        i=i>>1;
        index++;
    }
//     cout<<output<<endl;
    ans.push_back(output);
    output="";
    solve(str ,ans, num+1, output);
}

vector<string> subsequences(string str){
	vector<string> ans;
    string output="";
    int num=1;
    solve(str ,ans, num, output);
    return ans;
}

int main(){
    string str="abc";
    vector<string> ans;
    ans=subsequences(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}