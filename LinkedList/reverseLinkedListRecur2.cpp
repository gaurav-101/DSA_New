Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL){
		return head;
    }
    
    Node* chotaHead=reverseLinkedList(head->next);
	head->next->next=head;
    head->next=NULL;
    return chotaHead;
}