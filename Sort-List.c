struct ListNode* sortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* mid = slow->next;
    slow->next = NULL;

    struct ListNode* left = sortList(head);
    struct ListNode* right = sortList(mid);

    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* current = &dummy;

    while (left != NULL && right != NULL) {
        if (left->val <= right->val) {
            current->next = left;
            left = left->next;
        } else {
            current->next = right;
            right = right->next;
        }
        current = current->next;
    }

    if (left != NULL) {
        current->next = left;
    } else {
        current->next = right;
    }

    return dummy.next;
}
