//Approach 1 --- O(n^2)


Node *removeDuplicates(Node *head)
{
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        Node* prev=curr;
        while(temp!=NULL){
            if(temp->data==curr->data){
                Node* next_next=temp->next;
                delete(temp);
                prev->next=next_next;
                temp=next_next;
            }
            else{
                prev=temp;
            	temp=temp->next;
            }
        }
		curr=curr->next;
    }
    return head;
}