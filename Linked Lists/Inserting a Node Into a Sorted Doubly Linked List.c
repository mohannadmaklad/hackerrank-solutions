/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *current = head;
    Node *NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = data;

    if(head == NULL)
     {
         NewNode->next = NULL;
         NewNode->prev = NULL;
         return NewNode;
     }
   
    if(current->next == NULL && data > head->data)
    {
        NewNode->prev = current;
        NewNode->next = NULL;
        current->next = NewNode;
        return current;
    }else if(current->next == NULL && data < head->data)
    {
        NewNode->next = current;
        NewNode->prev = NULL;
        current->next = NULL;
        current->prev = NewNode;
        return NewNode;
    }
    
    while(current->next && current->next->data < data) current = current->next;
    Node *tmp = current->next;
    NewNode->next = current->next;
    NewNode->prev = current;
    current->next = NewNode;
    if(tmp!= NULL)tmp->prev = NewNode;
    return head;
}
