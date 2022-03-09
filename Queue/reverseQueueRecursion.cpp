void reverse(queue<int> &q, int i, int n){
    if(i==n){
        return;
    }
    int first=q.front();
    q.pop();
    reverse(q,++i,n);
    q.push(first);
}
queue<int> rev(queue<int> q)
{
    int i=0;
    int n=q.size();
    reverse(q,i,n);
    return q;
}