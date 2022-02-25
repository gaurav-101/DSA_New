// Space Complexity = O(1)    

void solve(stack<int>&s, int middle, int count){
    if(count==middle){
        s.pop();
        return ;
    }
    int temp=s.top();
    s.pop();
    solve( s,  middle,  count+1);
    s.push(temp);
}
void deleteMid(stack<int>&s, int size)
{
    int count=0;
    int middle=size/2;
    solve( s,  middle,  count);
}










// Space Complexity = O(n)    
// Using another stack

void deleteMid(stack<int>&s, int size)
{
    stack<int> tempElement;
    int middle=(size)/2;
    for(int i=0;i<middle;i++){
        int temp=s.top();
        tempElement.push(temp);
        s.pop();
    }
    s.pop();
    while(!tempElement.empty()){
        int temp=tempElement.top();
        s.push(temp);
        tempElement.pop();
    }
}