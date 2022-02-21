// ********************* MY way **************************

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
    struct Node* curr=prev->next;
    while(temp!=NULL){
        if(curr==NULL){
            prev->next=temp;
            return ans;
        }
        if((prev->data<= temp->data) && (temp->data<=curr->data)){
            prev->next=temp;
            prev=prev->next;
            struct Node* nextTemp=temp->next;
            temp->next=curr;
            temp=nextTemp;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }
    return ans;
}





// ********************* Love Babbar way **************************

void solve(Node<int>* first, Node<int>* second) {
    
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            
        }
        
        
    }
    
    
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        solve(first, second);
    }
    else
    {
        solve(second, first);
    }
    
    
}