struct ListNode* reverse(struct ListNode* previous, struct ListNode* node) {
    struct ListNode* temp;
    if (node->next == NULL) {
        node->next = previous;
        return node;
    }
    temp = node->next;
    node->next = previous;
    return reverse(node, temp);
}

bool isPalindrome(struct ListNode* head) {
    if (head->next == NULL) {
        return 1;
    }
    struct ListNode* copy = head;
    int size = 1;
    while (copy->next != NULL) {
        size++;
        copy = copy->next;
    }
    size = (size / 2) + (size % 2);
    copy = head;
    while (size > 0) {
        size--;
        copy = copy->next;
    }
    if (copy->next != NULL) {
        copy = reverse(NULL, copy);
    }
    while (copy != NULL) {
        if (copy->val != head->val) {
            return 0;
        }
        copy = copy->next;
        head = head->next;
    }
    return 1;
}
