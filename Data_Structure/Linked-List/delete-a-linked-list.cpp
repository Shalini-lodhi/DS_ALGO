//https://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/

void deleteList(Node** head_ref)
{
    Node* current = *head_ref;
    Node* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}
