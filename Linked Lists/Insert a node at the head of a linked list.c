Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}
