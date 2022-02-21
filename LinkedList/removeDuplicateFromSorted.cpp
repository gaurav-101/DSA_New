Node * uniqueSortedList(Node * head) {
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head;// Write your code here.
}


// Approach2
Node * removeDuplicates( Node *head) 
    {
        if(head==NULL){
            return NULL;
        }
        Node* curr=head->next;
        Node* prev=head;
        map<int,bool> visited;
        visited[head->data]=true;
        while(curr!=NULL){
            if(visited[curr->data]==true){
                Node* next_next = curr ->next;
                delete(curr);
                prev -> next = next_next;
                curr=next_next;
            }
            else{
                visited[curr->data]=true;
                curr=curr->next;
                prev=prev->next;
            }
        }
        return head;
    }