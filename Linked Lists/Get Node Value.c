/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *current = head;
    int cnt = 0, size = 0 ;
    while(current->next) { current = current->next; size++;}
    current = head;
    while(current->next && size-cnt++ > positionFromTail) current = current->next;
    return current->data;
    
}
