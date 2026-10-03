struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;

    free(temp);

    return head;
}
