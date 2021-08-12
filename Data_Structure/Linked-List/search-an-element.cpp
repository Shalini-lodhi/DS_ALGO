//https://www.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/

bool search(struct Node* head, int x)
{
    if (head == NULL)
        return false;

    if (head->key == x)
        return true;
    return search(head->next, x);
}
