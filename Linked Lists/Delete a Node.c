/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *current = head;
    int cnt = 0;
    if(head == NULL) return NULL;
    if(!position)
    {
        if(current ->next) return current->next;
    }
    while(current -> next && cnt < position-1)
    {
        current = current -> next;
        cnt++;
    }
    current->next = current->next->next;
    return head;
}
