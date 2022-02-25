bool isValidParenthesis(string str)
{
    stack<char> para;
    para.push(str[0]);
    int n=str.size();
    for(int i=1;i<n;i++){
        if(str[i]=='{' || str[i]=='[' || str[i]=='('){
            para.push(str[i]);
        }
        else{
            if(para.size()==0){
                return 0;
            }
            char top=para.top();
            if((top=='{' && str[i]=='}') || (top=='(' && str[i]==')') || (top=='[' && str[i]==']')){
                para.pop();
            }
            else{
                return 0;
            }
        }
    }
    if(para.size()==0){
        return 1;
    }
    else{
        return 0;
    }
}