queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;
    
    //first k element stack me daaldo  and queue se hatado
    for(int i = 0; i<k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
       // k element stack se nikalke wapas queue me daalde 
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    

    // fer queue k (n-k) starting k elements, wapas queue me daalde
    int n=q.size();

    for(int i=0;i<n-k;i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}