bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* prev = NULL;
    struct ListNode* current = slow;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    struct ListNode* left = head;
    struct ListNode* right = prev;

    while (right != NULL) {
        if (left->val != right->val) {
            return false;
        }

        left = left->next;
        right = right->next;
    }

    return true;
}
