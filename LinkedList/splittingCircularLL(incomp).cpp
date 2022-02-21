void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head==NULL || head->next==NULL){
        *head1_ref=head;
        return ;
    }
    
    Node* curr=head;
    int length=0;
    while(curr!=NULL){
        length++;
        curr=curr->next;
    }
    int length1,length2;
    if(length%2==0){
        length1=length/2;
        length2=length/2;
    }
    else{
        length1=(length+1)/2;
        length2=(length-1)/2;
    }
    
    int l1=1;
    Node* curr1=*head1_ref;
    while(l1<length1){
        curr1->data=curr->data;
        curr1=curr1->next;
        curr=curr->next;
    }
    curr1->next=*head1_ref;
    
    
    int l2=1;
    Node* curr2=*head2_ref;
    while(l2<length2){
        curr2=curr;
        curr2=curr2->next;
        curr=curr->next;
    }
    curr2->next=*head2_ref;
    
    
}