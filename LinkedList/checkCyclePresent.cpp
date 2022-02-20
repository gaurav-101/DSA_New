bool detectLoop(Node* head)
    {
        if(head==NULL){
            return false;
        }
        map< Node* , bool> visited;
        Node* curr=head;
        
        while(curr!=NULL){
            
            // cycle is present
            if(visited[curr]==true){
                return 1;
            }
            
            visited[curr]=true;
            curr=curr->next;
        }
        return 0;
    }