struct Node* insertAtPosition(struct Node* head, int value, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;

    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
