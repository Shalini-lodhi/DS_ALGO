//https://practice.geeksforgeeks.org/problems/find-length-of-loop/1#

int countNodesinLoop(struct Node *head){
    Node* tortoise = head;
    Node* hare = head;
    int loop = 1;
    
    if(head == NULL)
        return 0;
    
    while(hare != NULL && hare->next != NULL){
        hare = hare->next->next;
        tortoise = tortoise->next;
        
        if(hare == tortoise)
            break;
    }
    
    if(hare == NULL || hare->next == NULL)
        return 0;
    
    tortoise = tortoise->next;
    
    while(tortoise != hare){
        loop++;
        tortoise = tortoise->next;
    }
    
    return loop;
}
