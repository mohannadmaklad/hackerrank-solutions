/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    if(headA == NULL && headB) return headB;
    if(headB == NULL && headA) return headA;
    if(headA == NULL && headB == NULL) return NULL;
    
    Node *rtnHead;
    Node *current1,*current2;
    Node *tmp1,*tmp2;
    if(headA->data < headB->data) {rtnHead = headA ;current1 = headA; current2 = headB;}
    else {rtnHead = headB ; current1 = headB; current2 = headA;}
    
    while(current1 && current2)
    {
        if(current1->data < current2->data)
        {
           while(current1->next && current1->next->data < current2->data) current1 = current1->next;
            tmp1 = current1->next;
            tmp2 = current2->next;
            current1->next = current2;
            current2->next = tmp1;
            current2 = tmp2;
        }
    
    }
    return rtnHead;
}
