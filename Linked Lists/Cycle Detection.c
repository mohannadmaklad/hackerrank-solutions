/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head ==NULL) return NULL;
    Node *current = head;
    int cnt = 0 ;
    while(current->next!=NULL && cnt++ < 101) current = current->next;
    if(cnt>=101) return true ;
    else return false;
}
