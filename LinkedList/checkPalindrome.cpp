// Algo1

bool isPalindromeArray(vector<int> arr){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        if(arr[left]!= arr[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    
    return isPalindromeArray(arr);
}