/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{ 
    int cnt = 0 ;
    Node *current = head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data; 
    newNode -> next = NULL;
    
    if(position == 0)
        if(head == NULL)
            return newNode;
        else 
        {
            newNode->next = head;
            return newNode;
        }
    
    while(current && current->next )
    {
        if(cnt++ == position-1) break; //stop at the element right before position
        current = current -> next;
    }
    newNode -> next = current->next;
    current -> next = newNode;
    return head;
}
