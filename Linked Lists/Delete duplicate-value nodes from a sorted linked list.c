
Node* RemoveDuplicates(Node *head)
{
    if(head == NULL) return NULL;
    Node *current = head;
    Node *currentIteration = head;
    int current_data = current->data;
    while(currentIteration->next)
    {
        current = currentIteration;
        current_data = currentIteration->data;
        while((current->data < current_data) && current->next) current = current->next;
        while((current->data <= current_data) && current->next)
        {
            if(current->next->data == current_data) current->next = current->next->next;
            else current = current->next;
        }
        if(currentIteration->next)
        {
            currentIteration = currentIteration->next;
            current_data = currentIteration->data;
        }
    }
    return head;
}
