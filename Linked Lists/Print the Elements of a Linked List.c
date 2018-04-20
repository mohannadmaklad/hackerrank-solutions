void Print(Node *head)
{   
    Node *current = head;
    while(current)
    {
        printf("%d\n",current->data);
        current = current->next;
    }
}