void ans(Node* &head, Node *curr, Node *prev ){
        if(curr==NULL){
            head=prev;
            return;
        }
        Node* forward=curr->next;
        curr->next=prev;
        ans(head, forward, curr);
    	
}

Node* reverseLinkedList(Node *head)
{
    Node* prev=NULL;
	Node* curr=head;
    ans(head, curr, prev);
    return head;
}