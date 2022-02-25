struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    struct Node* prev;
    struct Node* temp;
    struct Node* ans;
    if(a->data>=b->data){
        ans=b;
        prev=b;
        temp=a;
    }
    else{
        ans=a;
        prev=a;
        temp=b;
    }
    struct Node* curr=prev->bottom;
    while(temp!=NULL){
        if(curr==NULL){
            prev->bottom=temp;
            return ans;
        }
        if((prev->data<= temp->data) && (temp->data<=curr->data)){
            prev->bottom=temp;
            prev=prev->bottom;
            struct Node* nextTemp=temp->bottom;
            temp->bottom=curr;
            temp=nextTemp;
        }
        else{
            prev=curr;
            curr=curr->bottom;
        }
    }
    return ans;
}


Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL){
        return root;
    }
    Node* downLL=root;
    
    Node* rightLL = flatten(root->next);
    downLL->next=NULL;
    Node* ans=SortedMerge(downLL,rightLL);
    return ans;
}