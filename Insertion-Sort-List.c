struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        struct ListNode* prev = &dummy;

        while (prev->next != NULL && prev->next->val < current->val) {
            prev = prev->next;
        }

        current->next = prev->next;
        prev->next = current;

        current = nextNode;
    }

    return dummy.next;
}
