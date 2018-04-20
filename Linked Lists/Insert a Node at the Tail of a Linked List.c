Node* Insert(Node *head,int data)
{
    Node *current = head;
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    if(current == NULL)
        return newNode;
    else
    {
        while(current->next != NULL) 
            current = current -> next;
        current->next = newNode;
    }
    return head;
}
