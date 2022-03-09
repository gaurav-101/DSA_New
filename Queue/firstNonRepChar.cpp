

//Using MY WAY (ARRAY)
string FirstNonRepeating(string a){
    string ans="";
    int count[26]={0};
    queue<char> q;
    for(int i=0;i<a.length();i++){
        int j=a[i]-'a';
        count[j]++;
        q.push(a[i]);
        while(q.size()!=0){
            if(count[q.front() - 'a']==1){
                ans+=q.front();
                break;
            }
            else{
                q.pop();
                if(q.size()==0){
                    ans+='#';
                    break;
                }
            }
        }
    }
    return ans;
}
