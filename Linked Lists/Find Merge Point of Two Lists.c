/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    Node *first = headA , *second = headB;
    
    while(first->next)
    {
        while(second->next)
        {
            if(first->next == second->next) return first->next->data;
            else second = second->next;
        }
        second = headB;
        first = first->next;
    }
    return NULL; //It should never reach here
}
