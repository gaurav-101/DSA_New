void sortInsert(stack<int> &stack,int temp){
    if((!stack.empty() && stack.top()<=temp) || stack.empty()){
        stack.push(temp);
        return ;
    }
	int tempInt=stack.top();
    stack.pop();
    sortInsert(stack,temp);
    stack.push(tempInt);
}


void sortStack(stack<int> &stack)
{
	if(stack.empty()){
        return ;
    }
    int temp=stack.top();
    stack.pop();
    sortStack(stack);
    sortInsert(stack,temp);
}