struct Node* deleteAtPosition(struct Node* head, int pos) {
    if (head == NULL) {
        return NULL;
    }

    if (pos == 0) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* temp = head;

    for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return head;
    }

    struct Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);

    return head;
}
