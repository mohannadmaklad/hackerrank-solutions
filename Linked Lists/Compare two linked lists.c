/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node *frst = headA, *scnd = headB;
    if(headA == NULL && headB == NULL) return 1;
    else if (headA == NULL || headB == NULL) return 0;
    
    while(frst&&scnd)
    {
        if(frst->data == scnd->data)
        {
            frst = frst->next;
            scnd = scnd->next;
        } else return 0;
    }
    if(frst == NULL && scnd == NULL) return 1;
    else return 0;
}
