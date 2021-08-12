//https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1#

Node *removeDuplicates(Node *head)
{
  if (head == NULL)
        return NULL;
    head->next = removeDuplicates(head->next);
    if (head->next != NULL &&
        head->next->data == head->data) {
 
        Node* res = head->next;
        delete head;
        return res;
    }
 
    return head;
}
